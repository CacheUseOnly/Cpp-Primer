/*
 * Write a program that uses a do while loop to repetitively
 * request two strings from the user and report which string is less than
 * the other.
 */

#include <iostream>

int main() {
    std::string str1, str2;

    do {
        std::cout << "Please input string1: ";
        std::cin >> str1;
        std::cout << "Please input string2: ";
        std::cin >> str2;

        std::cout << "String " << ((str1.size() > str2.size()) ? "str1" : "str2") << " is longer\n";
    } while (1);

    return 0;
}