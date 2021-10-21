#include <iostream>
#include <fstream>
#include "funcs.h"

int main() {
    std::cout << "***TASK A****" << std::endl;
    std::ifstream fin("badCode.cpp");
    std::ofstream out;
    out.open("fixedCode.cpp");
    if(fin.fail()) {
        std::cout << "Cannot open badCode.cpp" << std::endl;
        exit(1);
    }
    std::string line;
    while(getline(fin,line)) {
        std::cout << removeLeadingSpaces(line) << std::endl;
        out << removeLeadingSpaces(line) << "\n";
    }
    std::cout << std::endl;
    std::cout << "***TASK B****" << std::endl;
    std::ifstream fin2("badCode.cpp");
    std::ofstream out2;
    out2.open("indentedFixedCode.cpp");
    if(fin2.fail()) {
        std::cout << "Cannot open badCode.cpp";
        exit(1);
    }

    std::string firstLine;
    std::string secondLine;
    while(getline(fin2,firstLine)) {
        int openBrace = countChar(line,'{');
        int closeBrace = countChar(line,'}');
        int numTabs = 0;
        if(openBrace == 1) {
        numTabs++;
        }
        else if(closeBrace == 1) {
        numTabs--;
        }
        std::cout << indent(removeLeadingSpaces(firstLine), numTabs) << std::endl;
        out2 << indent(removeLeadingSpaces(firstLine), numTabs) << "\n";
    }
    return 0;
}