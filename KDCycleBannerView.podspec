Pod::Spec.new do |s|
  s.name         = 'KDCycleBannerViewDemo'
  s.version      = '1.0'
  s.license      =  :type => 'MIT'
  s.license      = {
    :type => 'MIT',
    :text => 'LICENSE' 
  }
  s.homepage     = 'https://github.com/kingiol/KDCycleBannerView'
  s.authors      =  'Kingiol' => 'kingxiaokang@gmail.com'
  s.summary      = 'A Cycle Or Loop ScrollView For Banner'

# Source Info
  s.platform     =  :ios, '5.0'
  s.source       =  :git => 'https://github.com/kingiol/KDCycleBannerView', :tag => '1.0'
  s.source_files = 'KDCycleBannerView/*{h,m}'
  s.framework    =  ''

  s.requires_arc = true
  
# Pod Dependencies
  spec.dependency 'SDWebImage'

end