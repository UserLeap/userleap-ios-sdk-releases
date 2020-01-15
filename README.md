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

Usage is simple and revolves around a singleton, conveniently named `UserLeap`. The singleton must be configured before it can be used. The most obvious place for this is in your `ApplicationDelegate`, but do what's appropriate for your application.

```swift
UserLeap.shared.configure(environment: "YOUR_ENVIRONMENT_ID_HERE")
```

### Setting properties

Setting the user identifier helps to provide a consistent experience across platforms.

```
UserLeap.shared.setUserIdentifier("myUserId")
```

If you set the user identifier, it's important you also clear it when the user logs out. This will prevent new activity being associated with the wrong user.

```
UserLeap.shared.logout()
```

Setting the email address allows us to deliver certain surveys over email.

```
UserLeap.shared.setEmailAddress("example@email.com")
```

There are various other properties you may want to set. These help us deliver the most appropriate surveys based on the user's engagement. For more details, [see the online documentation](https://docs.userleap.com/installation).

## Tracking an Event and Presenting a Survey

To give developers control over the user experience, the UserLeap SDK will not automatically present any UI. Instead, surveys are delivered in response to tracked events. When a relevant event occurs in your application, you can record that event and check for a relevant survey in one call:

```swift
  UserLeap.shared.track(eventName: "My Event Name") { [weak self] state in
      guard let self = self else { return }
      if state == .ready {
          UserLeap.shared.presentSurvey(from: self)
      }
  }
```

## Testing

### Activating the Sample Survey

Surveys are delivered sparsely and unpredictably (for the client). This is the desired behavior in the wild, but it can make testing your integration tricky.

To simplify integration testing, the library provides a sample survey that can loaded at any time by calling the `UserLeap.shared.presentDebugSurvey(from: self)`.


### Environmental Overrides

You can use certain environmental variables to accomplish some testing tasks:

* `USERLEAP_HARD_RESET` - set this to `1` to clear all local state during initialization

