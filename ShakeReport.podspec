#
# Be sure to run `pod lib lint curl.podspec' to ensure this is a
# valid spec before submitting.
#
# Any lines starting with a # are optional, but their use is encouraged
# To learn more about a Podspec see http://guides.cocoapods.org/syntax/podspec.html
#

Pod::Spec.new do |s|
  s.name             = 'ShakeReport'
  s.version          = '0.2.0'
  s.summary          = 'An open source bug report, easy to use! Shake to report anything.'

# This description is used to generate tags and improve search results.
#   * Think: What does it do? Why did you write it? What is the focus?
#   * Try to keep it short, snappy and to the point.
#   * Write the description between the DESC delimiters below.
#   * Finally, don't worry about the indent, CocoaPods strips it!

  s.description      = <<-DESC
TODO: Add long description of the pod here.
                       DESC

  s.homepage         = 'https://github.com/papiguy/ShakeReport'
  s.license          = { :type => 'MIT', :file => 'LICENSE' }
  s.author           = { 'papiguy' => 'nitin.khanna@viewglass.com' }
  s.source           = { :git => 'https://github.com/papiguy/ShakeReport.git', :tag => s.version.to_s }
  s.source_files     = "ShakeReport/Library/**/*.{h,m}"
  s.ios.deployment_target = '8.0'
  s.public_header_files  = "ShakeReport/Library/**/*.h"
  s.frameworks = 'UIKit', 'MessageUI', 'QuartzCore' 
end
