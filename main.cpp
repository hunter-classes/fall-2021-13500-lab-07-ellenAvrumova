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
    while(getline(fin,line)) {
        std::cout << removeLeadingSpaces(line) << std::endl;
    }

    return 0;
}