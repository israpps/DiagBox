/***************************************************************
 * Name:      main.cpp
 * Purpose:   program behaviour
 * Author:    matias israelson (aka: El_isra) (tatochin-m@hotmail.com)
 * Copyright: matias israelson (aka: El_isra) (https://github.com/israpps)
 * License:   GPL-3.0
 **************************************************************/
#include "main.h"


int main(int argc, char* argv[])
{
    string  argvS[argc];
    exename = EXE_NAME(argv[0]);

    if (argc == 1)
        print_help();
    else
    {
        for (int x=0; x<argc; x++)//clone arguments into std::string
            {argvS[x] = argv[x];}


        if ( (argc <=2) && ((strcmp(argv[1],CMD_GD) == 0) || (strcmp(argv[1],CMD_PRINTF)==0) ))
                cout << "missing argument...\nenter the comand: \"" << exename << " help\" to learn how to use this program\n";

        if ( (argc >= 3) && (strcmp(argv[1],CMD_GD) == 0))
                COLOR_STRING(argvS[2]);
        if ( (argc >= 3) && (strcmp(argv[1],CMD_PRINTF) == 0))
        {
                for (int x=2;x<argc;x++)
                {
                    COLOR_STRING(argvS[x].substr(0,2));
                    std::cout << argvS[x].substr(2);
                    COLOR(07);
                }
        std::cout<<std::endl;
        }


        if(strcmp(argv[1],CMD_COLORS)==0)
                show_colors();

        if(strcmp(argv[1],CMD_HELP)==0)
            print_help();
    }
    return 0;
}

