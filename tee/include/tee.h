#pragma once
#include <iostream>
#include <fstream>
#include <vector>
#include <string.h> // strcmp

using std::vector;
using std::cin;
using std::cout;
using std::ofstream;
using std::ios;

class tee{
    public:
    tee(int &argc, char** argv);
    private:
    bool append_mod=false;
    void check_mod_a(int &argc, char** argv);

    vector<ofstream> filesToWrite;
    void get_files_names(int &argc, char** argv);
    void stream_to_cout_and_files();
};
