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
    fin.close();
    out.close();

    std::cout << std::endl;

    std::cout << "***TASK B****" << std::endl;
    std::ifstream fin2("badCode.cpp");
    std::ofstream out2;
    out2.open("indentedFixedCode.cpp");
    if(fin2.fail()) {
        std::cout << "Cannot open badCode.cpp";
        exit(1);
    }

    std::string output;
    int numTabs;
    while(getline(fin2,output)) {
        int openBrace = countChar(output,'{');
        int closeBrace = countChar(output,'}');
        if(closeBrace == 1) {
            numTabs--;
        }
        for(int i = 0; i < numTabs; i++) {
            std::cout << "\t";
            out2 << "\t";
        }
        std::cout << removeLeadingSpaces(output) << std::endl;
        out2 << removeLeadingSpaces(output) << "\n";
        if(openBrace == 1) {
            numTabs++;
        }
    }

    fin2.close();
    out2.close();

    return 0;
}