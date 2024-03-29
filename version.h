#ifndef VERSION_H
#define VERSION_H

namespace AutoVersion{
	
	//Date Version Types
	static const char DATE[] = "20";
	static const char MONTH[] = "12";
	static const char YEAR[] = "2021";
	static const char UBUNTU_VERSION_STYLE[] =  "21.12";
	
	//Software Status
	static const char STATUS[] =  "Beta";
	static const char STATUS_SHORT[] =  "a";
	
	//Standard Version Type
	static const long MAJOR  = 1;
	static const long MINOR  = 1;
	static const long BUILD  = 8;
	static const long REVISION  = 28;
	
	//Miscellaneous Version Types
	static const long BUILDS_COUNT  = 74;
	#define RC_FILEVERSION 1,1,8,28
	#define RC_FILEVERSION_STRING "1, 1, 8, 28\0"
	static const char FULLVERSION_STRING [] = "1.1.8.28";
	
	//These values are to keep track of your versioning state, don't modify them.
	static const long BUILD_HISTORY  = 24;
	

}
#endif //VERSION_H
