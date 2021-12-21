/***************************************************************
 * Name:      main.h
 * Purpose:   header inclusion & function declaration
 * Author:    matias israelson (aka: El_isra) (tatochin-m@hotmail.com)
 * Copyright: matias israelson (aka: El_isra) (https://github.com/israpps)
 * License:   GPL-3.0
 **************************************************************/


#ifndef _H_MAIN_H_
#define _H_MAIN_H_
///<>
#include <iostream>
#include <windows.h>
#include <string>
#include <string.h>
#include <iomanip>
//-------------------//
///""
#include "diagbox.h"
#include "version.h"
#include "exename.h"
//-------------------//

///namespace
using namespace std;

#ifdef BITS32
#define BITS " '32 bits' "
#else
#define BITS " '64 bits'"
#endif // BIT32

///Variables
string exename;

///Commands
#define CMD_GD "gd" ///global directive (change text color till used again)
#define CMD_PRINTF "pf" ///printf mode, inspired on C printf();
#define CMD_COLORS "colors" ///shows all 255 colors
#define CMD_HELP "help" ///quite self explanatory


///FUNCTIONS
//---------------------------
int stoi_with_hex(string original)
{
    int DOU = stoi(original,0,16);
#ifdef $TEST
    cout << "$TEST " << DOU <<endl;
#endif
    return DOU;
}
//---------------------------
void show_colors ()
{
    cout << endl << endl;
    cout << "Printing examples"<< endl;
    cout << "..."<< endl << endl;
    int x = 0;
    cout << "===================================================="       << endl;
    while (x<=255)
    {
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),x);
            if (x <= 15) //on the first row...
            {
                cout << setw(2);
                cout << 0; //...Prepend a '0' (black background)
            }
            else
            cout << setw(3);

        cout << std::hex  << x ;
        x++;
        if ( (x % 16) ==0 )//split based on background color
            cout << endl;
    }
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),07);
    cout << "===================================================="       << endl;
}




void print_help(void)
{
    COLOR_INT(15);
    cout << "===================================================="<< endl;
    cout << "Diagbox version [" << AutoVersion::FULLVERSION_STRING << "]-[" << AutoVersion::STATUS << "]"<< BITS << endl;
    cout << "build:" << AutoVersion::YEAR <<"-"<< AutoVersion::MONTH <<"-"<< AutoVersion::DATE<<endl;
    cout << "Made by Matias israelson (Aka: El_isra)"<<endl;
    cout << "https://github.com/israpps/DiagBox\n";
    cout << "===================================================="<< endl;
    COLOR_INT(7);
    COLOR_INT(15);
    cout << "usage of this Program:\n\n";
    cout << "to see the available colors\n";
    COLOR_INT(7);
    cout << exename << " " << CMD_COLORS <<endl<<endl<<endl;
    COLOR_INT(15);
    cout << "to change the color\n";
    COLOR_INT(7);
    cout << exename << " " << CMD_GD;
    COLOR_INT(12);
    cout << " $COLOR_CODE"<<endl;
    COLOR_INT(7);
    cout << "to use different colors on the same line:\n"
         << exename <<" pf ";
         COLOR(0c);
         cout <<"COLOR_CODE";
         COLOR(07);
         cout <<"Text\n...\n\nExample:\n\t"<<exename<<" pf 0cwarning!! \"0e  It seems that diagbox got updated after so long...\" \"0a and it seems that we can print text with different colors on the same line!\"";
         cout <<"\nwill yield this text:\n"; COLOR(0c);
         cout <<"\twarning!! "; COLOR(0e)
         cout <<"It seems that diagbox got updated after so long..."; COLOR(0a);
         cout <<" and it seems that we can print text with different colors on the same line!\n"; COLOR(07);
         cout <<"\n\n\t every argument will be written on the same line, taking the first two chars as color code\n";
    //cin.ignore();
}

#endif //_H_MAIN_H_

