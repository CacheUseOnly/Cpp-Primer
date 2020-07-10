/*  Write a program to read strings from the standard input, 
 * concatenating what is read into one large string. 
 * Print the concatenated string. 
 * Next, change the program to separate adjacent input strings by a space
 */

#include <iostream>

int main() {
    std::string bufferStr, finalStr1 = "", finalStr2 = "";

    for (int i = 0; i < 5; i++) {
        std::cout << "Please input string" << i + 1 << ": ";
        //std::cin >> bufferStr;
        getline(std::cin, bufferStr);
        finalStr1 += bufferStr;
        finalStr2 = finalStr2 + " " + bufferStr;
    }

    std::cout << "Concatenated string: " << finalStr1 << std::endl;
    std::cout << "Sparated strings: " << finalStr2 << std::endl;

    return 0;
}