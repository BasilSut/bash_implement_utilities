#include "tee.h"

tee::tee(int &argc, char** argv){
        check_mod_a(argc, argv);
        get_files_names(argc, argv);
        stream_to_cout_and_files();
}

void tee::check_mod_a(int &argc, char** argv){
    for (int i = 1; i < argc; i++){
        if (strcmp(argv[i], "-a") == 0){
            append_mod = true;
            break;
        }
    }
}

void tee::get_files_names(int &argc, char** argv){
    for (int i = 1; i < argc; i++){
        if (strcmp(argv[i], "-a") == 0){
            continue;
        }
        // Filenames
        filesToWrite.emplace_back(argv[i], (append_mod ? ios::app : ios::out));
    }
}

void tee::stream_to_cout_and_files(){
    char c;
    while ((c = cin.get()) != EOF){
        cout << c;
        for (ofstream & file : filesToWrite){
            file << c;
        }
    }
}
