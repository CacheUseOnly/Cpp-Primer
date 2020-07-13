/* Rewrite the program in the first exercise, 
 * first using a while and again using a traditional for loop. 
 * Which of the three approaches do you prefer and why?
 */

#include <iostream>

int main() {
    std::string input1, input2, input3;
    int i = 0;

    std::cout << "Input str1: ";
    std::cin >> input1;
    std::cout << "Input str1: ";
    std::cin >> input2;
    std::cout << "Input str1: ";
    std::cin >> input3;
    for (auto& c : input1) {
        c = 'X';
    }

    while (i < input2.size()) {
        input2[i] = 'X';
        i++;
    }

    for (int i = 0; i < input3.size(); i++) {
        input3[i] = 'X';
    }

    std::cout << "Output: " << input1 << std::endl;
    std::cout << "Output: " << input2 << std::endl;
    std::cout << "Output: " << input3 << std::endl;

    return 0;
}