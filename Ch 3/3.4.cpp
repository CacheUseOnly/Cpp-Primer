/* Write a program to read two strings and report whether the strings are equal. 
 * If not, report which of the two is larger. 
 * Now, change the program to report whether the strings have the same length, 
 * and if not, report which is longer
 */

#include <iostream>

int main() {
    std::string str1, str2;
    
    std::cout << "Input string1: ";
    getline(std::cin, str1);
    std::cout << "Input string2: ";
    getline(std::cin, str2);
    
    if (str1 == str2) {
        std::cout << "Two strings are equal.\n";
    } else if (str1 > str2) {
        std::cout << "str1 is larger than str2.\n";
    } else {
        std::cout << "str2 is larger than str1.\n";
    }

    if (str1.size() == str2.size()) {
        std::cout << "They have same size.\n";
    } else {
        std::cout << (str1.size() > str2.size()) ? "str1 is longer.\n" : "str2 is longer.\n";
    }
    
    return 0;
}