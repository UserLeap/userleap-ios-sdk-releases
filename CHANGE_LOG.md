# Change Log

### Version 3.0.0
* Updated UserLeap class to be visible to Objective-C projects
* UserLeap.visitorIdentifier type has been changed from Int? to NSNumber?
* Reachability class which was erroneously public is now private
* Calling UserLeap init() is no longer allowed, please access through the singleton shared method

### Version 2.3.3
* Build with Xcode 12A6163b

### Version 2.3.3
* Fixed bug with multiple choice routing logic
* Built with Xcode 12 beta 2, Swift 5.3

### Version 2.3.2
* Improved implementation of UserLeap.shared.setLocale() 

### Version 2.3.1
* Added UserLeap.shared.setLocale() so clients can override static text localization

### Version 2.3.0
* Added localization for ja, ko, fr, ru, zh, de, hi

### Version 2.2.0

* Allow visitors to see and respond to the same survey if the customers wants (done through the dashboard)

### Version 2.1.0

* Added NPS question type support

### Version 2.0.0

* Change framework name to UserLeapKit so it doesn't conflict with class UserLeap

### Version 1.1.0

* Enabled Module Stability
* Added disableNetworkAccess parameter

### Version 1.0.2

* Bump, no changes

### Version 1.0.1

* Fixed: Presenting the debug survey before the SDK finishes initializing can cause non-main-thread UI operations

### Version 1.0.0

* The first version


