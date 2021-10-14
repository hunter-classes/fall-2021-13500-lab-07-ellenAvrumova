#include <iostream>
#include <cctype>
#include <string>

std::string removeLeadingSpaces(std::string line) {
    std::string outputLine;

    for(int i = 0; i < line.length()-1; i++) {
        if(!isspace(line[i]) && !isspace(line[i+1])) {
            outputLine += line[i];
        }
    }

    return outputLine;
}