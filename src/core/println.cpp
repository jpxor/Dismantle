
#include "core/println.hpp"
#include <iostream>

namespace Core{
    void println(std::string text){
        std::cout << text << std::endl;
    }
}