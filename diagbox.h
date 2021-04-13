#ifndef DIAGBOX
#define DIAGBOX
#include <windows.h>
#define COLOR_INT(args) SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),args);
#define COLOR_HEX(args) SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),stoi(#args,0,16));

#endif //DIAGBOX
