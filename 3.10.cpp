/* Write a program that reads a string of characters including punctuation 
 * and writes what was read but with the punctuation removed. 
 */

#include <iostream>

bool isPunc(char c);

int main() {
    std::string input;

    std::cout << "Please input: ";
    getline(std::cin, input);

    for (auto& c : input) {
        if (isPunc(c)) {
            c = ' ';
        }
    }

    std::cout << "Result: " << input;

    return 0;
}

bool isPunc(char c) {
    switch (c) {
    case ',':
    case ':':
    case '.':
    case '!':
    case '?':
    case ';':
    case '-':
    case '_':
    case '(':
    case ')':
    case '"':
        return true;
        break;    
    default:
        return false;
        break;
    }
}