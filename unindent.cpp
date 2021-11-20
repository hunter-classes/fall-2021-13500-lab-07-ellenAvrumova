/**
 * Author: Ellen Avrumova
 * Course: CSCI-135
 * Instructor: Tong Yi & Mike Zamansky
 * Assignment: Lab 7
 * This file removes all the spacing and indents before a line begins.
*/

//here are some comments

#include <iostream>
#include <cctype>
#include <string>
#include "funcs.h"

//this is a function
std::string removeLeadingSpaces(std::string line) {
    std::string outputLine; //defines outputLine

    for(int i = 0; i < line.length(); i++) { //for statement reads through lines
        if(!isspace(line[i])) { //if detects spaces in line
            outputLine += line.substr(i,line.length()); //subtracts spaces and adds rest of line into outputLine
            break; //stops code
        }
    }

    return outputLine; //returns result
}
