Pod::Spec.new do |s|
    s.name                  = "UserLeap"
    s.version               = "0.1.0"
    s.summary               = "UserLeap surveys in iOS"
    s.description           = <<-DESC
      An extended description of MyFramework project.
      DESC
    s.homepage              = "http://www.userleap.com"
    s.license               = { :type => 'Copyright', :text => <<-LICENSE
                                   Copyright 2019
                                   Permission is granted to...
                                   LICENSE
                              }
    s.author                = { "The UserLeap Team" => "hello@userleap.com" }
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
