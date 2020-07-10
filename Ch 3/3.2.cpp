/* Write a program to read the standard input a line at a time. 
 * Modify your program to read a word at a time.
 */

#include <iostream>

int main() {
    std::string input;

    getline(std::cin, input);
    std::cout << input << std::endl;

    // Modification
    std::cin >> input;
    std::cout << input << std::endl;
    
    return 0;
}