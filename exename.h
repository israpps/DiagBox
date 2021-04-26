#ifndef _H_EXENAME_H_
#define _H_EXENAME_H_
  #include <string>

  std::string EXE_NAME (char* _argv0)
  {
  std::string temporary = _argv0;
  return temporary.substr( temporary.find_last_of('\\')+ 1 );
  }

  std::string EXE_NAME (std::string _argv0)
  {
  return _argv0.substr(_argv0.find_last_of('\\') +1 );
  }
#endif // _H_EXENAME_H_
