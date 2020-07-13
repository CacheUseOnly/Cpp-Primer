/* What would happen if you define the loop control variable 
 * in the previous exercise as type char? 
 * Predict the results and then change your program 
 * to use a char to see if you were right
 */

// the desire string remain unchanged
#include <iostream>

int main() {
    std::string input;

    std::cout << "Input: ";
    std::cin >> input;

    for (char c : input) {
        c = 'X';
    }

    std::cout << "Output: " << input << std::endl;

    return 0;
}