#include "main.h"



//const char* DD = "dd"; ///output given text allowing to change the color of diferent sections WIP

//int stoi_with_hex(string original);
//void show_colors();

int main(int argc, char* argv[])
{
    string  argvS[argc];
    exename = EXE_NAME(argv[0]);

    if (argc == 1)
        print_help();
    else
    {
///-------clone arguments as strings///
    for (int x=0; x<argc; x++)
        {
        argvS[x] = argv[x];
        }
///---------------------------------///


    if ( (argc <=2) && (argvS[1]==CMD_GD) )
            cout << "missing argument...\nenter the comand: \"" << exename << " help\" to learn how to use this\n";
    if ( (argc >= 3) && (argv[1]==CMD_GD) )
            COLOR_HEX(argvS[2]);


    if(argvS[1]==CMD_COLORS)
            show_colors();

    if(argvS[1]==CMD_HELP)
        print_help();
    }
    return 0;
}

