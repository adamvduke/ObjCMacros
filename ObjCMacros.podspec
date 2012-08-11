Pod::Spec.new do |s|
  s.name         = 'ObjCMacros'
  s.version      = '0.0.1'
  s.summary      = 'A small collection of useful macros'
  s.author       = 'Adam Duke' => 'adam.v.duke+github@gmail.com'
  s.source       = { :git => 'https://github.com/adamvduke/ObjCMacros', :commit => 'fcac50150f2847be81394e0e46f8c4ca33b84b4c' }
  s.source_files = 'Classes', './*.h'
end