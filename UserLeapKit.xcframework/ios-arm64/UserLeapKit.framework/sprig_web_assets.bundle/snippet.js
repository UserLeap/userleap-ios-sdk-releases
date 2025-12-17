window.Sprig = function() {
    S._queue.push(arguments);
};
let S = window.Sprig;
S._queue = [];
window.SprigLoggerCallback = function(message) {
  window.webkit.messageHandlers.sprigWebController.postMessage(
    {
        type: 'logger', 
        message
    }
);
};

function configure(environmentId, mobileHeadersJSON) {
    S.mobileHeadersJSON = mobileHeadersJSON;
    S.config = {
        _API_URL: 'https://api.sprig.com',
        envId: environmentId,
        isMobileSDK: true,
        controllerSDKURL: 'shim.js',
        viewSDKURL: 'view.js',
    };
    const script = document.createElement('script');
    script.async = 1;
    script.src = S.config.controllerSDKURL;
    const anchor = document.getElementsByTagName('script')[0];
    anchor.parentNode.insertBefore(script, anchor);
}

function handleSurveyCallback(result, callbackId) {
    // no survey handler but the survey is shown
    if (!callbackId) {
        Sprig.dismissActiveSurvey()
        return;
    }
    const surveyState = result.surveyState;
    const surveyDelay = result.delay || 0
    if (surveyState !== 'ready') {
        window.webkit.messageHandlers.sprigWebController.postMessage(
            {
                type: 'surveyCallback', 
                callbackId, 
                surveyState: surveyState,
                delay: surveyDelay
            }
        );
    } else {
        const surveyReadyCallback = () => {
            window.webkit.messageHandlers.sprigWebController.postMessage(
                {
                    type: 'surveyCallback', 
                    callbackId, 
                    surveyState: surveyState,
                    delay: surveyDelay
                }
            );
            Sprig.removeListener('survey.appeared', surveyReadyCallback);
        };
        Sprig('addListener', 'survey.appeared', surveyReadyCallback);
    }
}

// Function to get the background property
function getBackgroundColor(selector, cssString = '') {
    try {
        if (cssString && typeof cssString === 'string') {
            const hexColorRegex = /^#([0-9A-F]{3}){1,2}$/i;
            const cssRegex = new RegExp(`${selector}\\s*{[^}]*background\\s*:\\s*([^;}]+)`, 'i');

            const match = cssString.match(cssRegex);

            if (match?.[1]) {
                const backgroundColor = match[1].trim();
                if (hexColorRegex.test(backgroundColor)) {
                    return backgroundColor;
                }
            }
        }
    } catch (e) {
        console.log('Failed to get backgroundColor', e);
    }
    // Return a default value if not found or not a valid hex color
    return '#ffffff';
}

const stringifyProps = (obj, excludeProps = [ 'type' ]) => {
    const stringified = {};
    for (const k of Object.keys(obj)) {
        if (excludeProps.includes(k)) continue;
        stringified[k] = JSON.stringify(obj[k]);
    }
    return stringified;
};

Sprig('addListener', 'visitor.id.updated', (payload) => {
    window.webkit.messageHandlers.sprigWebController.postMessage({type: 'visitorIdUpdated', visitorId: payload.visitorId});
});
Sprig('addListener', 'sdk.ready', (payload) => {
    window.webkit.messageHandlers.sprigWebController.postMessage({type: 'sdkReady', ...stringifyProps(payload), cardBgColor: getBackgroundColor('.ul-card__container', S._config.customStyles) });
});
Sprig('addListener', 'replay.capture', (payload) => {
    window.webkit.messageHandlers.sprigWebController.postMessage({type: 'replayCapture', responseGroupUid: payload.responseGroupUid, hasQuestions: JSON.stringify(payload.hasQuestions), surveyId: JSON.stringify(payload.surveyId), uploadId: payload.uploadId, replayType: payload.replayType, seconds: JSON.stringify(payload.seconds), uploadUrl: payload.uploadUrl, generateVideoUploadUrlPayload: payload.generateVideoUploadUrlPayload });
});
Sprig('addListener', 'survey.height', (payload) => {
    window.webkit.messageHandlers.sprigWebController.postMessage({type: 'setHeight', height: payload.contentFrameHeight.toString(), surveyId: payload['survey.id'].toString() });
});
Sprig('addListener', 'survey.width', (payload) => {
    window.webkit.messageHandlers.sprigWebController.postMessage({type: 'setWidth', height: payload.contentFrameWidth.toString(), surveyId: payload['survey.id'].toString() });
});
Sprig('addListener', 'survey.will.present', (payload) => {
    window.webkit.messageHandlers.sprigWebController.postMessage({type: 'surveyWillPresent', surveyId: payload['survey.id'].toString(), layout: payload['layout'] });
});
Sprig('addListener', 'survey.presented', (payload) => {
    window.webkit.messageHandlers.sprigWebController.postMessage({type: 'surveyPresented', surveyId: payload['survey.id'].toString() });
});
Sprig('addListener', 'survey.appeared', (payload) => {
    window.webkit.messageHandlers.sprigWebController.postMessage({type: 'surveyAppeared', surveyId: payload['survey.id'].toString() });
});
Sprig('addListener', 'survey.closeRequested', (payload) => {
    window.webkit.messageHandlers.sprigWebController.postMessage({type: 'surveyCloseRequested', initiator: payload['initiator'], surveyId: payload['survey.id'].toString() });
});
Sprig('addListener', 'survey.willClose', (payload) => {
    window.webkit.messageHandlers.sprigWebController.postMessage({type: 'surveyWillClose', initiator: payload['initiator'], surveyId: payload['survey.id'].toString() });
});
Sprig('addListener', 'survey.closed', (payload) => {
    window.webkit.messageHandlers.sprigWebController.postMessage({type: 'surveyClosed', surveyId: payload['survey.id'].toString()});
});
Sprig('addListener', 'question.answered', (payload) => {
    window.webkit.messageHandlers.sprigWebController.postMessage({type: 'questionAnswered', surveyId: payload['survey.id'].toString()});
});
Sprig.mobileTrackEvent = async (event, userId, partnerAnonymousId, properties, callbackId) => {
    const payload = { eventName: event };
    if (userId) payload.userId = userId;
    if (partnerAnonymousId) payload.anonymousId = partnerAnonymousId;
    if (properties) payload.properties = properties;
    const result = await Sprig.identifyAndTrack(payload);
    handleSurveyCallback(result, callbackId);
}
Sprig.mobileDisplaySurvey = async (surveyId, callbackId) => {
    Sprig.dismissActiveSurvey();
    const result = await Sprig.displaySurvey(surveyId);
    handleSurveyCallback(result, callbackId);
}
Sprig.mobileIdentifyAndSetAttributes = (userId, partnerAnonymousId, attributes) => {
    const payload = { attributes };
    if (userId) payload.userId = userId;
    if (partnerAnonymousId) payload.anonymousId = partnerAnonymousId;
    Sprig('identifyAndSetAttributes', payload);
}
