/***************************************************************
 * Name:      exename.h
 * Purpose:   to keep a stupid function on another header, allowing faster re-use for my programs
 * Author:    matias israelson (aka: El_isra) (tatochin-m@hotmail.com)
 * Copyright: matias israelson (aka: El_isra) (https://github.com/israpps)
 * License:   GPL-3.0
 **************************************************************/

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
