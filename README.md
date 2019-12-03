# UserLeap iOS SDK

Official Releases of the UserLeap iOS SDK

Thank you for choosing UserLeap. This guide should help you get started.

## Getting the SDK

### CocoaPods

The recommended way to acquire this Framework is via [CocoaPods](https://cocoapods.org). Simply add the following statement to your Podfile, then run `pod install`:

```
  pod 'UserLeap', :git => 'https://github.com/UserLeap/userleap-ios-sdk-releases.git'
```

### Carthage

If you're using [Carthage](https://github.com/Carthage/Carthage), add the following statement to your Cartfile, and follow the [instructions](https://github.com/Carthage/Carthage#quick-start) to finish the installation:

```
github "UserLeap/userleap-ios-sdk-releases"
```

## Versioning

This SDK uses [Semantic Versioning 2.0.0](https://semver.org).

## Initializing the SDK

Usage is simple and revolves around one type, conveniently named `UserLeap`. Create one instance of this and keep it around while your application runs. The most obvious place for this is in your `ApplicationDelegate`, but do what's appropriate for your application.

```swift
let leap = UserLeap(environment: "YOUR_ENVIRONMENT_ID_HERE")
```

### Setting properties

Setting the user identifier helps to provide a consistent experience across platforms.

```
leap.setUserIdentifier("myUserId")
```

Setting the email address allows us to deliver certain surveys over email.

```
leap.setEmailAddress("example@email.com")
```

There are various other properties you may want to set. These help us deliver the most appropriate surveys based on the user's engagement. For more details, [see the online documentation](https://docs.userleap.com/version-1-documentation/user-stages).

```
leap.setSubscriptionStage(.subscribed)
leap.setTransactionStage(.cartCreated)
```

## Presenting a Survey

When a survey is available, it's up to you to present it. The SDK provides a few mechanisms for determining if a survey is available for the current user.

```swift
  leap.presentSurvey(fromViewController: myViewController)
```

### Use Ready Callback

You can provide a callback to the initializer that will be called whenever the `readyState` changes.

```swift
let leap = UserLeap(environment: "YOUR_ENVIRONMENT_ID_HERE") { leap in
  if leap.readyState == .surveyReady {
    leap.presentSurvey(fromViewController: myViewController)
  }
}
```

### Use the NotificationCenter

You can register for notifications about changes to the `readyState`.

```swift
NotificationCenter.default.addObserver(forName: UserLeap.ReadyStateDidChangeNotification, object: nil, queue: .main) { [weak self] notification in
  guard let self = self, let leap = notification.object as? UserLeap else { return }
  if leap.readyState == .surveyReady {
    leap.presentSurvey(fromViewController: self)
  }
}
```

Alternatively, you can listen for notifications only when the survey becomes ready to present:

```swift
NotificationCenter.default.addObserver(forName: UserLeap.SurveyReadyNotification, object: nil, queue: .main) { [weak self] notification in
  guard let self = self, let leap = notification.object as? UserLeap else { return }
  leap.presentSurvey(fromViewController: self)
}
```


### Check `readyState`

You can, at any point, check the `readyState`. You should use this property in conjunction with the above hooks to determine if there's something available to present.

```swift
let leap = UserLeap(environment: "YOUR_ENVIRONMENT_ID_HERE")
if leap.readyState == .surveyReady {
    leap.presentSurvey(fromViewController: self)
}
```

It has three possible states:

* `notReady`: the data has not been loaded yet
* `noSurvey`: the data has been loaded, but there's no survey to present at this time
* `surveyReady`: there is a survey awaiting presentation

## Testing

### Activating the Sample Survey

Surveys are delivered sparsely and unpredictably (for the client). This is the desired behavior in the wild, but it can make testing your integration tricky.

To simplify integration testing, the library provides a sample survey that can loaded at any time by calling the `triggerDebugSurvey()` method on your UserLeap instance. This will load the sample survey as if it had come from the server, including firing callbacks. After calling this, the `readyState` will equal `surveyReady` and calling `presentSurvey` will present the sample survey.


### Environmental Overrides

You can use certain environmental variables to accomplish some testing tasks:

* `USERLEAP_HARD_RESET` - set this to `1` to clear all local state during initialization

