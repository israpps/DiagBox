#ifndef DIAGBOX
#define DIAGBOX

#define ENABLE_COLORS
/**comment the line "#define ENABLE_COLORS" to disable the color macros
	* this was done in case you want to add portability to your program, saving you the task of removing the COLOR() macro everywhere
	*
	*
	*/
#ifdef ENABLE_COLORS
	#include <windows.h>
	#include <string>
	#define COLOR_INT(args)     SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),args);              //pass an integer between 0 to 255
	#define COLOR(args)         SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),stoi(#args,0,16));  //pass a hex value between 00 and ff
	#define COLOR_STRING(args)  SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),stoi(args,0,16));   //pass a hex value (in form of std::string) between 00 and ff
#else
	#define COLOR_INT(args)
	#define COLOR(args)
	#define COLOR_STRING(args)
#endif //ENABLE_COLORS

#endif //DIAGBOX
