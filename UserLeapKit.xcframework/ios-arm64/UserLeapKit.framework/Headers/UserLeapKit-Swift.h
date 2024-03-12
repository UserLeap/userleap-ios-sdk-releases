#if 0
#elif defined(__arm64__) && __arm64__
// Generated by Apple Swift version 5.8.1 (swiftlang-5.8.0.124.5 clang-1403.0.22.11.100)
#ifndef USERLEAPKIT_SWIFT_H
#define USERLEAPKIT_SWIFT_H
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wgcc-compat"

#if !defined(__has_include)
# define __has_include(x) 0
#endif
#if !defined(__has_attribute)
# define __has_attribute(x) 0
#endif
#if !defined(__has_feature)
# define __has_feature(x) 0
#endif
#if !defined(__has_warning)
# define __has_warning(x) 0
#endif

#if __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#if defined(__OBJC__)
#include <Foundation/Foundation.h>
#endif
#if defined(__cplusplus)
#include <cstdint>
#include <cstddef>
#include <cstdbool>
#include <cstring>
#include <stdlib.h>
#include <new>
#include <type_traits>
#else
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>
#include <string.h>
#endif
#if defined(__cplusplus)
#if __has_include(<ptrauth.h>)
# include <ptrauth.h>
#else
# ifndef __ptrauth_swift_value_witness_function_pointer
#  define __ptrauth_swift_value_witness_function_pointer(x)
# endif
#endif
#endif

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus)
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
# endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
typedef unsigned int swift_uint2  __attribute__((__ext_vector_type__(2)));
typedef unsigned int swift_uint3  __attribute__((__ext_vector_type__(3)));
typedef unsigned int swift_uint4  __attribute__((__ext_vector_type__(4)));
#endif

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif
#if !defined(SWIFT_CLASS_PROPERTY)
# if __has_feature(objc_class_property)
#  define SWIFT_CLASS_PROPERTY(...) __VA_ARGS__
# else
#  define SWIFT_CLASS_PROPERTY(...) 
# endif
#endif
#if !defined(SWIFT_RUNTIME_NAME)
# if __has_attribute(objc_runtime_name)
#  define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
# else
#  define SWIFT_RUNTIME_NAME(X) 
# endif
#endif
#if !defined(SWIFT_COMPILE_NAME)
# if __has_attribute(swift_name)
#  define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
# else
#  define SWIFT_COMPILE_NAME(X) 
# endif
#endif
#if !defined(SWIFT_METHOD_FAMILY)
# if __has_attribute(objc_method_family)
#  define SWIFT_METHOD_FAMILY(X) __attribute__((objc_method_family(X)))
# else
#  define SWIFT_METHOD_FAMILY(X) 
# endif
#endif
#if !defined(SWIFT_NOESCAPE)
# if __has_attribute(noescape)
#  define SWIFT_NOESCAPE __attribute__((noescape))
# else
#  define SWIFT_NOESCAPE 
# endif
#endif
#if !defined(SWIFT_RELEASES_ARGUMENT)
# if __has_attribute(ns_consumed)
#  define SWIFT_RELEASES_ARGUMENT __attribute__((ns_consumed))
# else
#  define SWIFT_RELEASES_ARGUMENT 
# endif
#endif
#if !defined(SWIFT_WARN_UNUSED_RESULT)
# if __has_attribute(warn_unused_result)
#  define SWIFT_WARN_UNUSED_RESULT __attribute__((warn_unused_result))
# else
#  define SWIFT_WARN_UNUSED_RESULT 
# endif
#endif
#if !defined(SWIFT_NORETURN)
# if __has_attribute(noreturn)
#  define SWIFT_NORETURN __attribute__((noreturn))
# else
#  define SWIFT_NORETURN 
# endif
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA 
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA 
#endif
#if !defined(SWIFT_ENUM_EXTRA)
# define SWIFT_ENUM_EXTRA 
#endif
#if !defined(SWIFT_CLASS)
# if __has_attribute(objc_subclassing_restricted)
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif
#if !defined(SWIFT_RESILIENT_CLASS)
# if __has_attribute(objc_class_stub)
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME) __attribute__((objc_class_stub))
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_class_stub)) SWIFT_CLASS_NAMED(SWIFT_NAME)
# else
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME)
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) SWIFT_CLASS_NAMED(SWIFT_NAME)
# endif
#endif
#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
# define SWIFT_PROTOCOL_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif
#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER 
# endif
#endif
#if !defined(SWIFT_ENUM_ATTR)
# if __has_attribute(enum_extensibility)
#  define SWIFT_ENUM_ATTR(_extensibility) __attribute__((enum_extensibility(_extensibility)))
# else
#  define SWIFT_ENUM_ATTR(_extensibility) 
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name, _extensibility) enum _name : _type _name; enum SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# if __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) SWIFT_ENUM(_type, _name, _extensibility)
# endif
#endif
#if !defined(SWIFT_UNAVAILABLE)
# define SWIFT_UNAVAILABLE __attribute__((unavailable))
#endif
#if !defined(SWIFT_UNAVAILABLE_MSG)
# define SWIFT_UNAVAILABLE_MSG(msg) __attribute__((unavailable(msg)))
#endif
#if !defined(SWIFT_AVAILABILITY)
# define SWIFT_AVAILABILITY(plat, ...) __attribute__((availability(plat, __VA_ARGS__)))
#endif
#if !defined(SWIFT_WEAK_IMPORT)
# define SWIFT_WEAK_IMPORT __attribute__((weak_import))
#endif
#if !defined(SWIFT_DEPRECATED)
# define SWIFT_DEPRECATED __attribute__((deprecated))
#endif
#if !defined(SWIFT_DEPRECATED_MSG)
# define SWIFT_DEPRECATED_MSG(...) __attribute__((deprecated(__VA_ARGS__)))
#endif
#if !defined(SWIFT_DEPRECATED_OBJC)
# if __has_feature(attribute_diagnose_if_objc)
#  define SWIFT_DEPRECATED_OBJC(Msg) __attribute__((diagnose_if(1, Msg, "warning")))
# else
#  define SWIFT_DEPRECATED_OBJC(Msg) SWIFT_DEPRECATED_MSG(Msg)
# endif
#endif
#if defined(__OBJC__)
#if !defined(IBSegueAction)
# define IBSegueAction 
#endif
#endif
#if !defined(SWIFT_EXTERN)
# if defined(__cplusplus)
#  define SWIFT_EXTERN extern "C"
# else
#  define SWIFT_EXTERN extern
# endif
#endif
#if !defined(SWIFT_CALL)
# define SWIFT_CALL __attribute__((swiftcall))
#endif
#if !defined(SWIFT_INDIRECT_RESULT)
# define SWIFT_INDIRECT_RESULT __attribute__((swift_indirect_result))
#endif
#if !defined(SWIFT_CONTEXT)
# define SWIFT_CONTEXT __attribute__((swift_context))
#endif
#if !defined(SWIFT_ERROR_RESULT)
# define SWIFT_ERROR_RESULT __attribute__((swift_error_result))
#endif
#if defined(__cplusplus)
# define SWIFT_NOEXCEPT noexcept
#else
# define SWIFT_NOEXCEPT 
#endif
#if defined(_WIN32)
#if !defined(SWIFT_IMPORT_STDLIB_SYMBOL)
# define SWIFT_IMPORT_STDLIB_SYMBOL __declspec(dllimport)
#endif
#else
#if !defined(SWIFT_IMPORT_STDLIB_SYMBOL)
# define SWIFT_IMPORT_STDLIB_SYMBOL 
#endif
#endif
#if defined(__OBJC__)
#if __has_feature(objc_modules)
#if __has_warning("-Watimport-in-framework-header")
#pragma clang diagnostic ignored "-Watimport-in-framework-header"
#endif
@import Foundation;
@import ObjectiveC;
#endif

#endif
#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
#if __has_warning("-Wpragma-clang-attribute")
# pragma clang diagnostic ignored "-Wpragma-clang-attribute"
#endif
#pragma clang diagnostic ignored "-Wunknown-pragmas"
#pragma clang diagnostic ignored "-Wnullability"
#pragma clang diagnostic ignored "-Wdollar-in-identifier-extension"

#if __has_attribute(external_source_symbol)
# pragma push_macro("any")
# undef any
# pragma clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in="UserLeapKit",generated_declaration))), apply_to=any(function,enum,objc_interface,objc_category,objc_protocol))
# pragma pop_macro("any")
#endif

#if defined(__OBJC__)
@class NSString;
enum SurveyState : NSInteger;

SWIFT_CLASS("_TtC11UserLeapKit12EventPayload")
@interface EventPayload : NSObject
- (nonnull instancetype)initWithEventName:(NSString * _Nonnull)eventName userId:(NSString * _Nullable)userId partnerAnonymousId:(NSString * _Nullable)partnerAnonymousId properties:(NSDictionary<NSString *, id> * _Nullable)properties handler:(void (^ _Nullable)(enum SurveyState))handler OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end

typedef SWIFT_ENUM(NSInteger, LifecycleEvent, open) {
  LifecycleEventSdkReady = 0,
  LifecycleEventVisitorIdUpdated = 1,
  LifecycleEventSurveyHeight = 2,
  LifecycleEventSurveyDimensions = 3,
  LifecycleEventSurveyWillPresent = 4,
  LifecycleEventSurveyPresented = 5,
  LifecycleEventSurveyAppeared = 6,
  LifecycleEventSurveyWillClose = 7,
  LifecycleEventSurveyClosed = 8,
  LifecycleEventReplayCapture = 9,
};


SWIFT_CLASS("_TtC11UserLeapKit22SGOptimizelyExperiment")
@interface SGOptimizelyExperiment : NSObject
- (nonnull instancetype)initWithId:(NSString * _Nonnull)id variation:(NSString * _Nonnull)variation OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end

@class NSNumber;

/// The primary class used to interact with UserLeap surveys. Use <code>UserLeap.shared</code>.
SWIFT_CLASS("_TtC11UserLeapKit8UserLeap")
@interface UserLeap : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
/// A reference to the UserLeap singleton.
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) UserLeap * _Nonnull shared;)
+ (UserLeap * _Nonnull)shared SWIFT_WARN_UNUSED_RESULT;
@property (nonatomic) BOOL disableNetworkAccess;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSString * _Nonnull previewKeyName;)
+ (NSString * _Nonnull)previewKeyName SWIFT_WARN_UNUSED_RESULT;
/// The user identifier used internally by UserLeap
@property (nonatomic, readonly, strong) NSNumber * _Nullable visitorIdentifier;
@property (nonatomic, readonly, copy) NSString * _Nullable visitorIdentifierString;
@end


SWIFT_CLASS("_TtC11UserLeapKit5Sprig")
@interface Sprig : UserLeap
@end

@class SprigAPIResult;

SWIFT_PROTOCOL("_TtP11UserLeapKit8SprigAPI_")
@protocol SprigAPI
/// Initial step to configure the Sprig sdk with environment
- (void)configureWithEnvironment:(NSString * _Nonnull)environment;
/// Initial configure function with additional parameters
- (void)configureWithEnvironment:(NSString * _Nonnull)environment configuration:(NSDictionary<NSString *, id> * _Nullable)configuration;
/// sets locale of the visitor
- (void)setLocale:(NSString * _Nonnull)locale;
/// Sends a tracking event and asks <code>Sprig</code> if there is a survey that should result from this event.
/// \param eventName The name of the event to track.
///
/// \param handler The handler that is called once the resulting survey (if any) is fetched. Use this handler to call <code>presentSurvey(from:)</code> if the <code>SurveyState</code> is equal to <code>.ready</code>. The handler is called on the main thread.
///
- (void)trackWithEventName:(NSString * _Nonnull)eventName handler:(void (^ _Nullable)(enum SurveyState))handler;
/// Sends a tracking event and asks <code>Sprig</code> if there is a survey that should result from this event, and track user id and partner anonymous id at the same time
/// \param eventName The name of the event to track.
///
/// \param userId The optional userId to identify visitor as an authenticated user at the same time
///
/// \param partnerAnonymousId The optional id coming from partner integration
///
/// \param handler The handler that is called once the resulting survey (if any) is fetched. Use this handler to call <code>presentSurvey(from:)</code> if the <code>SurveyState</code> is equal to <code>.ready</code>. The
///
- (void)trackWithEventName:(NSString * _Nonnull)eventName userId:(NSString * _Nullable)userId partnerAnonymousId:(NSString * _Nullable)partnerAnonymousId handler:(void (^ _Nullable)(enum SurveyState))handler;
/// Sends a tracking event with properties and asks <code>Sprig</code> if there is a survey that should result from this event.
/// \param eventName The name of the event to track.
///
/// \param properties Event properties.
///
/// \param handler The handler that is called once the resulting survey (if any) is fetched. Use this handler to call <code>presentSurvey(from:)</code> if the <code>SurveyState</code> is equal to <code>.ready</code>. The handler is called on the main thread.
///
- (void)trackWithEventName:(NSString * _Nonnull)eventName properties:(NSDictionary<NSString *, id> * _Nonnull)properties handler:(void (^ _Nullable)(enum SurveyState))handler;
/// Sends a tracking event with properties and asks <code>Sprig</code> if there is a survey that should result from this event, and track user id and partner anonymous id at the same time
/// \param eventName The name of the event to track.
///
/// \param userId The optional userId to identify visitor as an authenticated user at the same time
///
/// \param partnerAnonymousId The optional id coming from partner integration
///
/// \param properties Event properties.
///
/// \param handler The handler that is called once the resulting survey (if any) is fetched. Use this handler to call <code>presentSurvey(from:)</code> if the <code>SurveyState</code> is equal to <code>.ready</code>. The
///
- (void)trackWithEventName:(NSString * _Nonnull)eventName userId:(NSString * _Nullable)userId partnerAnonymousId:(NSString * _Nullable)partnerAnonymousId properties:(NSDictionary<NSString *, id> * _Nullable)properties handler:(void (^ _Nullable)(enum SurveyState))handler;
/// Sends a tracking event with properties and asks <code>Sprig</code> if there is a survey that should result from this event, and track user id and partner anonymous id at the same time
/// \param payload an instance of the Track class
///
- (void)trackWithPayload:(EventPayload * _Nonnull)payload;
/// Sets the email address for this <code>Sprig</code> visitor.
- (void)setEmailAddress:(NSString * _Nonnull)emailAddress;
/// Sets an attribute on the visitor
- (void)setVisitorAttributeWithKey:(NSString * _Nonnull)key value:(NSString * _Nonnull)value;
/// Sets an attribute on the visitor
- (void)setVisitorAttributeWithKey:(NSString * _Nonnull)key doubleValue:(double)doubleValue;
/// Sets an attribute on the visitor
- (void)setVisitorAttributeWithKey:(NSString * _Nonnull)key boolValue:(BOOL)boolValue;
/// Sets an attribute on the visitor
- (void)setVisitorAttributeWithKey:(NSString * _Nonnull)key intValue:(NSInteger)intValue;
/// Sets multiple attributes (only String, Bool, Double and Int are accepted as valid attributes)
- (void)setVisitorAttributes:(NSDictionary<NSString *, id> * _Nonnull)attributes;
/// Set attributes and identify with user id and/or partnerAnonymousId
- (void)setVisitorAttributes:(NSDictionary<NSString *, NSString *> * _Nonnull)attributes userId:(NSString * _Nullable)userId partnerAnonymousId:(NSString * _Nullable)partnerAnonymousId;
/// Async set for attributes with user id and/or partnerAnonymousId, returning a SprigAPIResult object.
/// \param attributes Dictionaty of the visitor attributes to be set. Only String, Bool, Double and Int
/// are accepted as valid attributes.
///
/// \param userId The optional userId to identify visitor as an authenticated user at the same time.
///
/// \param partnerAnonymousId The optional id coming from partner integration.
///
///
/// returns:
/// SprigAPIResult containing success/failure value and any error message.
- (void)setVisitorAttributesAsync:(NSDictionary<NSString *, id> * _Nonnull)attributes userId:(NSString * _Nullable)userId partnerAnonymousId:(NSString * _Nullable)partnerAnonymousId completionHandler:(void (^ _Nonnull)(SprigAPIResult * _Nonnull))completionHandler SWIFT_AVAILABILITY(ios,introduced=13.0);
/// Async set for an attribute with user id and/or partnerAnonymousId, returning a SprigAPIResult object.
/// \param key Key for the visitor attribute being passed.
///
/// \param value Value for the visitor attribute being passed. Only String, Bool, Double and Int
/// are accepted as valid attributes.
///
///
/// returns:
/// SprigAPIResult containing success/failure value and any error message.
- (void)setVisitorAttributeAsyncWithKey:(NSString * _Nonnull)key value:(id _Nonnull)value completionHandler:(void (^ _Nonnull)(SprigAPIResult * _Nonnull))completionHandler SWIFT_AVAILABILITY(ios,introduced=13.0);
/// Remove multiple attributes
- (void)removeVisitorAttributes:(NSArray<NSString *> * _Nonnull)attributes;
/// Sets an external user id for the visitor
- (void)setUserIdentifier:(NSString * _Nonnull)identifier;
/// Sets a partner integration’s anonymous id
- (void)setPartnerAnonymousId:(NSString * _Nonnull)identifier;
- (void)setPreviewKey:(NSString * _Nonnull)previewKey;
/// Clear the current user state and resets the visitor id
- (void)logout;
@end

enum SprigAPIResultStatus : NSInteger;

/// SprigAPIResult encapsulates the result of a Sprig API call.
/// <ul>
///   <li>
///     resultStatus can be quickly checked to determine if the call was successfull or not.
///   </li>
///   <li>
///     errorMessage will contain an error message if one has been returned from the service.
///   </li>
/// </ul>
SWIFT_CLASS("_TtC11UserLeapKit14SprigAPIResult")
@interface SprigAPIResult : NSObject
@property (nonatomic) enum SprigAPIResultStatus resultStatus;
@property (nonatomic, copy) NSString * _Nullable errorMessage;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end

typedef SWIFT_ENUM(NSInteger, SprigAPIResultStatus, open) {
  SprigAPIResultStatusSuccess = 0,
  SprigAPIResultStatusFailure = 1,
};


SWIFT_PROTOCOL("_TtP11UserLeapKit29SprigOptimizelyIntegrationAPI_")
@protocol SprigOptimizelyIntegrationAPI
/// Integration Optimizely
- (NSArray<SGOptimizelyExperiment *> * _Nonnull)integrateOptimizely:(NSObject * _Nonnull)optimizely userId:(NSString * _Nonnull)userId attributes:(NSDictionary<NSString *, id> * _Nonnull)attributes isOverride:(BOOL)isOverride SWIFT_WARN_UNUSED_RESULT;
- (void)integrateOptimizelyExperiments:(NSArray<SGOptimizelyExperiment *> * _Nonnull)_ :(BOOL)isOverride;
@end

@class UIViewController;

SWIFT_PROTOCOL("_TtP11UserLeapKit20SprigPresentationAPI_")
@protocol SprigPresentationAPI
/// tracks an event , and show the survey immediately when it is available
- (void)trackAndPresentWithEventName:(NSString * _Nonnull)eventName from:(UIViewController * _Nonnull)viewController;
/// tracks an event , set ids, and show the survey immediately when it is available
- (void)trackAndPresentWithEventName:(NSString * _Nonnull)eventName userId:(NSString * _Nullable)userId partnerAnonymousId:(NSString * _Nullable)partnerAnonymousId from:(UIViewController * _Nonnull)viewController;
/// tracks an event , set ids, and show the survey immediately when it is available
- (void)trackAndPresentWithPayload:(EventPayload * _Nonnull)payload from:(UIViewController * _Nonnull)viewController;
/// shows a survey if it exist from the given view controller
- (void)presentSurveyFrom:(UIViewController * _Nonnull)viewController;
/// Presents a survey specified by surveyId (should only be used for development testing purposes when the Allow Manual Study Display setting is turned on)
/// \param surveyId The ID of the survey you want to see
///
/// \param viewController The view controller from which to present the survey.
///
/// \param completion Invoked when survey questions have been fetched and it is about to present it
///
- (void)presentSurveyWithId:(NSInteger)surveyId from:(UIViewController * _Nonnull)viewController fetchCompletion:(void (^ _Nullable)(void))fetchCompletion;
- (void)dismissActiveSurvey;
@end

/// An enum that indicates whether a survey is ready to be displayed.
typedef SWIFT_ENUM(NSInteger, SurveyState, open) {
/// There is no survey to be displayed.
  SurveyStateNoSurvey = 0,
/// A survey is ready to be displayed.
  SurveyStateReady = 1,
/// The survey request has been disabled.
  SurveyStateDisabled = 2,
};










@interface UserLeap (SWIFT_EXTENSION(UserLeapKit)) <SprigOptimizelyIntegrationAPI>
- (NSArray<SGOptimizelyExperiment *> * _Nonnull)integrateOptimizely:(NSObject * _Nonnull)optimizely userId:(NSString * _Nonnull)userId attributes:(NSDictionary<NSString *, id> * _Nonnull)attributes isOverride:(BOOL)isOverride;
- (void)integrateOptimizelyExperiments:(NSArray<SGOptimizelyExperiment *> * _Nonnull)experiments :(BOOL)isOverride;
@end


@interface UserLeap (SWIFT_EXTENSION(UserLeapKit)) <SprigPresentationAPI>
- (void)trackAndPresentWithEventName:(NSString * _Nonnull)eventName from:(UIViewController * _Nonnull)viewController SWIFT_DEPRECATED_MSG("Use trackAndPresent with EventPayload instead");
- (void)trackAndPresentWithEventName:(NSString * _Nonnull)eventName userId:(NSString * _Nullable)userId partnerAnonymousId:(NSString * _Nullable)partnerAnonymousId from:(UIViewController * _Nonnull)viewController SWIFT_DEPRECATED_MSG("Use trackAndPresent with EventPayload instead");
- (void)trackAndPresentWithPayload:(EventPayload * _Nonnull)payload from:(UIViewController * _Nonnull)viewController;
/// Presents an existing survey if there is one ready.
/// \param viewController The view controller from which to present the survey.
///
- (void)presentSurveyFrom:(UIViewController * _Nonnull)viewController;
/// Presents a survey specified by surveyId (should only be used for development testing purposes)
/// \param surveyId The ID of the survey you want to see
///
/// \param viewController The view controller from which to present the survey.
///
/// \param completion Invoked when survey questions have been fetched and it is about to present it
///
- (void)presentSurveyWithId:(NSInteger)surveyId from:(UIViewController * _Nonnull)viewController fetchCompletion:(void (^ _Nullable)(void))fetchCompletion;
/// Presents an example survey containing all the question types. Used for testing in debug.
/// \param viewController The view controller from which to present the survey.
///
- (void)presentDebugSurveyFrom:(UIViewController * _Nonnull)viewController;
- (void)dismissActiveSurvey;
@end


@interface UserLeap (SWIFT_EXTENSION(UserLeapKit))
- (void)registerEventListenerFor:(enum LifecycleEvent)eventType listener:(void (^ _Nonnull)(NSDictionary<NSString *, id> * _Nonnull))listener;
- (void)unregisterAllEventListenersFor:(enum LifecycleEvent)eventType;
@end


@interface UserLeap (SWIFT_EXTENSION(UserLeapKit)) <SprigAPI>
/// The UserLeap singleton must be configured before use. Call this during app initialization.
/// \param withEnvironment The environment ID for your application. You can find this in your UserLeap account.
///
- (void)configureWithEnvironment:(NSString * _Nonnull)environment;
/// Private method to customize mobile headers
- (void)configureWithEnvironment:(NSString * _Nonnull)environment configuration:(NSDictionary<NSString *, id> * _Nullable)configuration;
- (void)setLocale:(NSString * _Nonnull)locale;
/// Sends a tracking event and asks <code>UserLeap</code> if there is a survey that should result from this event.
/// \param eventName The name of the event to track.
///
/// \param handler The handler that is called once the resulting survey (if any) is fetched. Use this handler to call <code>presentSurvey(from:)</code> if the <code>SurveyState</code> is equal to <code>.ready</code>. The handler is called on the main thread.
///
- (void)trackWithEventName:(NSString * _Nonnull)eventName handler:(void (^ _Nullable)(enum SurveyState))handler SWIFT_DEPRECATED_MSG("Use track with EventPayload instead");
- (void)trackWithEventName:(NSString * _Nonnull)eventName userId:(NSString * _Nullable)userId partnerAnonymousId:(NSString * _Nullable)partnerAnonymousId handler:(void (^ _Nullable)(enum SurveyState))handler SWIFT_DEPRECATED_MSG("Use track with EventPayload instead");
/// Sends a tracking event with properties and asks <code>UserLeap</code> if there is a survey that should result from this event.
/// \param eventName The name of the event to track.
///
/// \param properties Event properties.
///
/// \param handler The handler that is called once the resulting survey (if any) is fetched. Use this handler to call <code>presentSurvey(from:)</code> if the <code>SurveyState</code> is equal to <code>.ready</code>. The handler is called on the main thread.
///
- (void)trackWithEventName:(NSString * _Nonnull)eventName properties:(NSDictionary<NSString *, id> * _Nonnull)properties handler:(void (^ _Nullable)(enum SurveyState))handler SWIFT_DEPRECATED_MSG("Use track with EventPayload instead");
- (void)trackWithEventName:(NSString * _Nonnull)eventName userId:(NSString * _Nullable)userId partnerAnonymousId:(NSString * _Nullable)partnerAnonymousId properties:(NSDictionary<NSString *, id> * _Nullable)properties handler:(void (^ _Nullable)(enum SurveyState))handler SWIFT_DEPRECATED_MSG("Use track with EventPayload instead");
- (void)trackWithPayload:(EventPayload * _Nonnull)payload;
/// Sets the email address for this <code>UserLeap</code> visitor.
- (void)setEmailAddress:(NSString * _Nonnull)emailAddress;
/// Sets an attribute on the visitor
- (void)setVisitorAttributeWithKey:(NSString * _Nonnull)key value:(NSString * _Nonnull)value;
/// Sets an attribute on the visitor
- (void)setVisitorAttributeWithKey:(NSString * _Nonnull)key intValue:(NSInteger)intValue;
/// Sets an attribute on the visitor
- (void)setVisitorAttributeWithKey:(NSString * _Nonnull)key doubleValue:(double)doubleValue;
/// Sets an attribute on the visitor
- (void)setVisitorAttributeWithKey:(NSString * _Nonnull)key boolValue:(BOOL)boolValue;
- (void)setVisitorAttributes:(NSDictionary<NSString *, id> * _Nonnull)attributes;
- (void)setVisitorAttributes:(NSDictionary<NSString *, NSString *> * _Nonnull)attributes userId:(NSString * _Nullable)userId partnerAnonymousId:(NSString * _Nullable)partnerAnonymousId;
/// Sets the passed attributes on the visitor.
/// Allowed attribute value types are:
/// <ul>
///   <li>
///     String
///   </li>
///   <li>
///     Bool
///   </li>
///   <li>
///     Int
///   </li>
///   <li>
///     Double
///   </li>
/// </ul>
- (void)setVisitorAttributesAsync:(NSDictionary<NSString *, id> * _Nonnull)attributes userId:(NSString * _Nullable)userId partnerAnonymousId:(NSString * _Nullable)partnerAnonymousId completionHandler:(void (^ _Nonnull)(SprigAPIResult * _Nonnull))completionHandler SWIFT_AVAILABILITY(ios,introduced=13.0);
/// Sets the passed attribute on the visitor.
/// Allowed attribute value types are:
/// <ul>
///   <li>
///     String
///   </li>
///   <li>
///     Bool
///   </li>
///   <li>
///     Int
///   </li>
///   <li>
///     Double
///   </li>
/// </ul>
- (void)setVisitorAttributeAsyncWithKey:(NSString * _Nonnull)key value:(id _Nonnull)value completionHandler:(void (^ _Nonnull)(SprigAPIResult * _Nonnull))completionHandler SWIFT_AVAILABILITY(ios,introduced=13.0);
- (void)removeVisitorAttributes:(NSArray<NSString *> * _Nonnull)attributes;
/// Sets the user identifier for this <code>UserLeap</code> visitor.
- (void)setUserIdentifier:(NSString * _Nonnull)identifier;
- (void)setPartnerAnonymousId:(NSString * _Nonnull)identifier;
- (void)setPreviewKey:(NSString * _Nonnull)previewKey;
/// Clear the current user state
- (void)logout;
@end

#endif
#if defined(__cplusplus)
#endif
#if __has_attribute(external_source_symbol)
# pragma clang attribute pop
#endif
#pragma clang diagnostic pop
#endif

#else
#error unsupported Swift architecture
#endif
