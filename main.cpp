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


    if ( (argc <=2) && (strcmp(argv[1],CMD_GD) == 0))
            cout << "missing argument...\nenter the comand: \"" << exename << " help\" to learn how to use this program\n";

    if ( (argc >= 3) && (strcmp(argv[1],CMD_GD) == 0))
            COLOR_STRING(argvS[2]);


    if(strcmp(argv[1],CMD_COLORS)==0)
            show_colors();

    if(strcmp(argv[1],CMD_HELP)==0)
        print_help();
    }
    return 0;
}

