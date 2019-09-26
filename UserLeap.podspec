Pod::Spec.new do |s|
    s.name                  = "UserLeap"
    s.version               = "0.1.4"
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
    s.source_files          = "UserLeap.framework/Headers/*.h"
    s.public_header_files   = "UserLeap.framework/Headers/*.h"
    s.vendored_frameworks   = "UserLeap.framework"
    s.platform              = :ios
    s.swift_version         = "4.2"
    s.ios.deployment_target = '10.0'
end
