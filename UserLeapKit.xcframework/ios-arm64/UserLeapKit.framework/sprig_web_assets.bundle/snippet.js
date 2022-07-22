window.Sprig = function() {
    S._queue.push(arguments);
};
let S = window.Sprig;
S._queue = [];

function configure(environmentId, mobileHeadersJSON) {
    S.mobileHeadersJSON = mobileHeadersJSON;
    S.config = {
        _API_URL: 'https://api.sprig.com',
        envId: environmentId,
        controllerSDKURL: 'shim.js',
        viewSDKURL: 'view.js',
    };
    const script = document.createElement('script');
    script.async = 1;
    script.src = S.config.controllerSDKURL;
    const anchor = document.getElementsByTagName('script')[0];
    anchor.parentNode.insertBefore(script, anchor);
}

function handleSurveyCallback(surveyState, callbackId) {
    if (surveyState !== 'ready') {
        window.webkit.messageHandlers.sprigWebController.postMessage({type: 'surveyCallback', callbackId, surveyState});
    } else {
        const surveyReadyCallback = () => {
            window.webkit.messageHandlers.sprigWebController.postMessage({type: 'surveyCallback', callbackId, surveyState: 'ready'});
            Sprig.removeListener('survey.appeared', this);
        };
        Sprig('addListener', 'survey.appeared', surveyReadyCallback);
    }
}
Sprig('addListener', 'survey.willClose', (status) => {
    window.webkit.messageHandlers.sprigWebController.postMessage({type: 'surveyWillDismiss'});
});
Sprig('addListener', 'visitor.id.updated', (payload) => {
    window.webkit.messageHandlers.sprigWebController.postMessage({type: 'visitorIdUpdated', visitorId: payload.visitorId});
});
Sprig('addListener', 'sdk.ready', () => {
    window.webkit.messageHandlers.sprigWebController.postMessage({type: 'sdkReady'});
});
Sprig('addListener', 'survey.height', (payload) => {
    window.webkit.messageHandlers.sprigWebController.postMessage({type: 'setHeight', height: payload.contentFrameHeight.toString() });
});
Sprig.mobileTrackEvent = async (event, userId, partnerAnonymousId, callbackId) => {
    const payload = { eventName: event };
    if (userId) payload.userId = userId;
    if (partnerAnonymousId) payload.anonymousId = partnerAnonymousId;
    const result = await Sprig.identifyAndTrack(payload);
    handleSurveyCallback(result.surveyState, callbackId);
}
Sprig.mobileDisplaySurvey = async (surveyId, callbackId) => {
    Sprig.dismissActiveSurvey();
    const result = await Sprig.displaySurvey(surveyId);
    handleSurveyCallback(result.surveyState, callbackId);
}

