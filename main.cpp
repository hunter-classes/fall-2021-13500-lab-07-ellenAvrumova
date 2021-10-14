#include <iostream>
#include <fstream>
#include "funcs.h"

int main() {
    std::ifstream fin("badCode.cpp");

    if(fin.fail()) {
        std::cout << "Cannot open badCode.cpp" << std::endl;
        exit(1);
    }

    std::string line;
    for (std::string line; std::getline(fin, line);) {
        std::cout << removeLeadingSpaces(line) << std::endl;
    }

    // while(fin >> line) {
    //     //std::cout << "Reading line";
    //     //std::getline(std::cin,line);
    //     removeLeadingSpaces(line);
    //     std::cout << line << std::endl;
    //}

    return 0;
}