#ifndef _H_MAIN_H_
#define _H_MAIN_H_
///<>
#include <iostream>
#include <windows.h>
#include <string>
#include <iomanip>
//-------------------//
///""
#include "version.h"
#include "exename.h"
//-------------------//

///namespace
using namespace std;


///Variables
string exename;

///Commands
#define CMD_GD "gd" ///global directive (change text color till used again)
#define CMD_COLORS "colors" ///shows all 255 colors
#define CMD_HELP "help" ///quite self explanatory

#define COLOR_INT(args) SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),args);
#define COLOR_HEX(args) SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),stoi_with_hex(args));
///FUNCTIONS
//---------------------------
int stoi_with_hex(string original)
{
    int DOU = stoi(original,0,16);
#ifdef $TEST
    cout << "$TEST" << DOU <<endl;
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
            if (x <= 15)
            {
                cout << setw(2);
             cout << 0;
            }
            else
            cout << setw(3);
        cout << std::hex  << x ;
        x++;
        if ( (x % 16) ==0 )
            cout << endl;
    }
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),07);
    cout << "===================================================="       << endl;
}




void print_help(void)
{
    COLOR_INT(15);
    cout << "===================================================="<< endl;
    cout << "Diagbox version [" << AutoVersion::FULLVERSION_STRING << "]-[" << AutoVersion::STATUS << "]"<<endl;
    cout << "build:" << AutoVersion::YEAR <<"-"<< AutoVersion::MONTH <<"-"<< AutoVersion::DATE<<endl;
    cout << "Made by Matias israelson (Aka: El_isra)"<<endl;
    cout << "===================================================="<< endl;
    COLOR_INT(7);
    cout << "usage of this Program:\n\n";
    cout << "to see the available colors\n";
    cout << exename << " " << CMD_COLORS <<endl<<endl<<endl;
    cout << "to change the color\n";
    cout << exename << " " << CMD_GD << " $COLOR_CODE"<<endl;
    cin.ignore();
}

#endif //_H_MAIN_H_

