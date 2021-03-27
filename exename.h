#ifndef _H_EXENAME_H_
#define _H_EXENAME_H_

  std::string EXE_NAME (char* _argv0)
  {
  std::string temporary = _argv0;
  std::string EXENAME;
  EXENAME = temporary.substr( temporary.find_last_of('\\')+ 1 );

return EXENAME;
  }


#endif // _H_EXENAME_H_
