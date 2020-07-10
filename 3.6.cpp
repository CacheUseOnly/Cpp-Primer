/* Use a range for to change all the characters in a string to X. */

#include <iostream>

int main() {
    std::string input;

    std::cout << "Input: ";
    std::cin >> input;

    for (auto& c : input) {
        c = 'X';
    }

    std::cout << "Output: " << input << std::endl;

    return 0;
}