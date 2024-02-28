# Change Log

<!-- add: A new feature -->
<!-- fix: A bug fix -->
<!-- chore: Changes to the build process or auxiliary tools and libraries -->

### 4.21.1

- fix: Fix for endpoint issue.

### 4.21.0

- add: Session replays.
- fix: Prevent config from happening if it has already been called.
- fix: Escape single quotes in eventName.

### 4.20.2

- add: `x-ul-package-version` header to report mobile SDK plugin versions
- fix: set default `cssString` in getBackgroundColor to prevent regex match failing

### 4.20.1

fix: Added missing JS files

### 4.20.0

- add: Added the method dismissActiveSurvey to enable dismissing of an active survey
- add: Added async methods for sending visitor attributes
- chore: Update LICENSE

### 4.19.3

- feat: Improve right-to-left language formatting

### 4.19.2

- fix: calling track() from background thread would sporadically cause a SIGSEGV
- chore: still on web sdk 2.24.4

### 4.19.1

- fix: `setPreviewKey` was not working because of old web sdk version
- chore: update web sdk to 2.24.4

### 4.19.0

- add: add `setPreviewKey` interface method for customer to set previewKey via deep link
- fix: execution order of custom lifecycle event handlers
- fix: dismissOnPageChange event race condition for events fired before `sdkReady`
- fix: Webview bottom background color based on custom styles configured for survey
- chore: update web sdk to 2.24.2

### 4.18.0

- add: support for isOverride flag to allow overriding experiments while integrating with Optimizely
- add: support for survey lifecycle events

### 4.17.0

- add: added a showSurveyCallback to allow dynamically manage whether to show the survey or not
- fix: fixed a issue that results in a UI blocking routine introduced from 4.15.0
- chore: update web sdk to 2.24.0

### 4.16.0

- add: add integrateOptimizelyExperiments in the public SprigAPI
- chore: update to web sdk 2.23.2

### 4.15.0

- add: add dismissOnPageChange functionality to iOS
- add: add private interface methods for importing LaunchDarkly flag to variation index mapping
- chore: update to web sdk 2.23.0

### 4.14.0

- add: add additional interface for boolean and number types for setVisitorAttribute
- fix: fix an issue preventing scrolling after answering an open text question
- chore: update to web sdk 2.21.7

### 4.13.0

- add: Add new optional parameter to configure function
- chore: remove storage.swift
- chore: add ios legacy build automation
- chore: update to web sdk 2.21.3

### 4.12.2

- chore: update to web sdk 2.21.2

### 4.12.1

- New EventPayload object to simplify calling track methods available for ObjC projects
- Allows public methods (excluding displaySurvey and other UI methods) to be called from a background thread
- Uses web 2.19.7

### 4.12.0

- New EventPayload object to simplify calling track methods
- Uses web 2.19.7

### 4.11.1

- Fixed an issue in text url prompt that prevents opening in external browser

### 4.11.0

- Added mobile trigger delay and optimizely integration
- Bug fixes and improvements

### 4.10.0

- Added required questions in the sdk
- Bug fixes and improvements

### 4.9.0

- Added event properties in the sdk
- Bug fixes and improvements

### 4.8.6

- Built using xcode 14. Bitcode is removed in xcode 14, please update your build environment for compatibility. Xcode 13 compatible builds will be available in a later release.
- Bug fixes and improvements

### 4.8.5

- Bug fixes and improvements

### 4.8.4

- Added a public api method trackAndPresentWithEventName that allows presenting survey immediately after tracking an event
- Bug fixes and improvements

### 4.8.3

- Added a public api method setVisitorAttributes that allows setting user id and partner anonymous id

### 4.8.2

- Added a public api method to track event with optional parameters userId and partner anonymous id
- Gracefully handle configure from being called multiple times

### 4.8.1

- Added an additional public api for setting the anonymous id from partner's integration

### 4.8.0

- Added support for new question types, functionalities and bug fixes
- removed presentDebugSurvey
- deprecated the NSNumber visitorIdentifier in preference to the String visitorIdentifierString

### 4.7.0

- license update
- bug fixes and improvements

### 4.6.0

- support SPM

### 4.5.0

- built sdk using xcframework

### 4.4.4

- fixed an sdk versioning issue that omitted the change in 4.4.3

### 4.4.3

- removed arm64 from excluded architecture to support simulator builds

### 4.4.2

- Fixed reported SDK version
- Security improvements

### 4.4.1

- Built with Xcode 13.0 (13A233)

### 4.4.0

- New Sprig namespace, you can now import and use the Sprig singleton
- Built with Xcode 12.5.1 (12E507)

### 4.4.0-beta

- New Sprig namespace, you can now import and use the Sprig singleton
- Built with Xcode 13.0 beta (13A5155e)

### 4.3.0-beta

- Built with Xcode 13.0 beta (13A5155e) which fixes the "Unable to use malformed module source info" build error

### 4.3.0

- Added support for text url prompt, a new question type that allows external link with informational title and body text.

### 4.2.1

- Fixes bug: When visitor id changes when a survey is in progress, the responses for that survey should be associated with the visitor id at the time the survey was delivered.

### Version 4.2.0

- Added support for multiple choice multi-select skip logic

### Version 4.1.1

- Bug fixes and improvements

### Version 4.1.0

- Added the ability to dynamically control the question text and thanks card text from dashboard settings

### Version 3.2.0

- Support visitorId as string type
- Improved network performance when app is backgrounded

### Version 3.1.1

- Included i386 architecture to framework

### Version 3.1.0

- Added setVisitorAttributes(\_ attributes: [String: String]) which allows setting multiple attributes at a time, saving network round trips
- Added removeVisitorAttributes(\_ attributes: [String])

### Version 3.0.0

- Updated UserLeap class to be visible to Objective-C projects
- UserLeap.visitorIdentifier type has been changed from Int? to NSNumber?
- Reachability class which was erroneously public is now private
- Calling UserLeap init() is no longer allowed, please access through the singleton shared method

### Version 2.3.3

- Build with Xcode 12A6163b

### Version 2.3.3

- Fixed bug with multiple choice routing logic
- Built with Xcode 12 beta 2, Swift 5.3

### Version 2.3.2

- Improved implementation of UserLeap.shared.setLocale()

### Version 2.3.1

- Added UserLeap.shared.setLocale() so clients can override static text localization

### Version 2.3.0

- Added localization for ja, ko, fr, ru, zh, de, hi

### Version 2.2.0

- Allow visitors to see and respond to the same survey if the customers wants (done through the dashboard)

### Version 2.1.0

- Added NPS question type support

### Version 2.0.0

- Change framework name to UserLeapKit so it doesn't conflict with class UserLeap

### Version 1.1.0

- Enabled Module Stability
- Added disableNetworkAccess parameter

### Version 1.0.2

- Bump, no changes

### Version 1.0.1

- Fixed: Presenting the debug survey before the SDK finishes initializing can cause non-main-thread UI operations

### Version 1.0.0

- The first version
