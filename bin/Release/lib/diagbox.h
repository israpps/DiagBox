#ifndef DIAGBOX
#define DIAGBOX

#define ISRA_WINDOWS
/**comment the line "#define ISRA_WINDOWS" to disable the color macros
	* this was done in case you want to add portability to your program, saving you the task of removing the COLOR() macro everywhere
	*
	*
	*/
#ifdef ISRA_WINDOWS
	#include <windows.h>
	#include <string>
	#define COLOR_INT(args) SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),args); //pass an integer between 0 to 255
	#define COLOR(args) SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),stoi(#args,0,16)); //pass a hex value between 00 and ff
	#define COLOR_STRING(args) SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),stoi(args,0,16)); //pass a hex value (in form of std::string) between 00 and ff
#else
	#define COLOR_INT(args) std::cout <<"";
	#define COLOR(args) std::cout <<"";
	#define COLOR_STRING(args) std::cout <<"";
#endif //ISRA_WINDOWS

#endif //DIAGBOX
