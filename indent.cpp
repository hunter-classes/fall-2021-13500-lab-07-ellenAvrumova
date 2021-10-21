#include <iostream>
#include "funcs.h"

int countChar(std::string line, char c) {
    int count = 0;
    for(int i = 0; i < line.length(); i++) {
        if(line[i] == c) {
            count++;
        }
    }
    return count;
}

std::string indent(std::string line, int numTabs) {
    std::string outputLine;
    for(int i = 0; i < numTabs; i++) {
        outputLine += "\t";
    }
    outputLine += line;
    return outputLine;
}
