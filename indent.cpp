/**
 * Author: Ellen Avrumova
 * Course: CSCI-135
 * Instructor: Tong Yi & Mike Zamansky
 * Assignment: Lab 7
 * This file counts the number of { or } found in a line and returns that number.
*/

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