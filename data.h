#include <iostream>
#include <cstdlib>
#include <fstream>
#include <filesystem>

/*

This program is used to do some networking using githubs servers.
Touch the code, and you'll probably break it.

Prereqestests... english is hard.
Programs you need to run this:
    git
    python
    Windows operating system (i'll figure out how to include macOS later... probably. Actually macOS might work, who knows.)

*/

#ifndef data_h
#define data_h

std::string gitRepository = "https://github.com/MagicalTinCan/battleshipServer.git";
std::string gitRemoteName = "noTouchie";
std::string localDirectory = "C:\\Users\\EGR126.03.CSCMERCER\\dataShtuff\\";
std::string dataFile = localDirectory + gitRemoteName + "\\data.txt";
std::string projectDirectory = std::filesystem::current_path().string() + "\\";
std::string pythonInitalizer = projectDirectory + "initalizeData.py";

struct data {

    int turn = 0;
    int strikePos[2] = {0,0};

    void initalizeData() { //Run this first or im stealing your knees
        std::string initalizeCommand = "python \"" + pythonInitalizer + "\" \"" + localDirectory + "\"525292925252929252529292\"" + gitRepository + "\"525292925252929252529292\"" + gitRemoteName + "\"";
        system(initalizeCommand.c_str());                                                            //Seperator
        //std::cout << initalizeCommand;
    }

    void exportData() {
        std::fstream DATA(dataFile);
    }
};

#endif