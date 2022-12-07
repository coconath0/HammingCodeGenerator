function ret = runApp()
  [dir, name, ext] = fileparts( mfilename('fullpathext') );
  global _grupo1BasePath = dir;
  global _grupo1ImgPath = [dir filesep() 'img'];
  addpath([dir filesep() "libs" ]);
  addpath([dir filesep() "fcn" ]);
  addpath([dir filesep() "wnd" ]);
  waitfor(CodHam().figure);
end
