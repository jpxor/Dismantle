
#include "core/println.hpp"
#include <fstream>

int main(int argc, const char * argv[]){
    std::string text;

    for(int i = 1; i < argc; ++i){
        std::string file_name = argv[i];
        Core::println(file_name + ":"); 

        std::ifstream in(file_name, std::ios::in);
        if(!in){
            Core::println("error: could not load file\n");
            continue;
        } 

        std::string line;
        while (std::getline(in,line)){
            Core::println(line); 
        }
        
    }
}