Pod::Spec.new do |s|
    s.name                  = "UserLeapKit"
    s.version               = "3.0.0"
    s.summary               = "UserLeap surveys in iOS"
    s.description           = <<-DESC
      Access the power of UserLeap inside of your iOS applications. Track visitor progress and deliver surveys natively across
      all  of your platforms.
      DESC
    s.homepage              = "http://userleap.com"
    s.license               = { :type => 'CUSTOM', :text => <<-LICENSE
****************************************************************************************************************************
UserLeap iOS SDK is offered under UserLeap's END USER LICENSE AGREEMENT. A copy of the license is available upon request
from your UserLeap Sales contact.
****************************************************************************************************************************
    LICENSE
                              }
    s.author                = { "The UserLeap Team" => "ios@userleap.com" }
    s.source                = { 
                                :git => "https://github.com/UserLeap/userleap-ios-sdk-releases.git", 
                                :tag => "v#{s.version}" 
                              }    
    s.source_files          = "UserLeapKit.framework/Headers/*.h"
    s.public_header_files   = "UserLeapKit.framework/Headers/*.h"
    s.vendored_frameworks   = "UserLeapKit.framework"
    s.platform              = :ios
    s.swift_version         = "5.3"
    s.ios.deployment_target = '10.3'
end
