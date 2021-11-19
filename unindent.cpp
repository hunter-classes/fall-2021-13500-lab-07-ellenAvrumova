/**
 * Author: Ellen Avrumova
 * Course: CSCI-135
 * Instructor: Tong Yi & Mike Zamansky
 * Assignment: Lab 7
 * This file removes all the spacing and indents before a line begins.
*/

#include <iostream>
#include <cctype>
#include <string>
#include "funcs.h"

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
