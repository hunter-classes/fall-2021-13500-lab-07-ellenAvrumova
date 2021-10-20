#include <iostream>
#include <cctype>
#include <string>

std::string removeLeadingSpaces(std::string line) {
    std::string outputLine;

    for(int i = 0; i < line.length(); i++) {
        if(!isspace(line[i])) {
            outputLine += line.substr(i,line.length());
            break;
        }
    }
    
    return outputLine;
}