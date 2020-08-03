// Determine the result of the following expressions.

#include <iostream>

int main() {
    std::cout << ( -30 * 3 + 21 / 5) << std::endl;
    std::cout << ( -30 + 3 * 21 / 5) << std::endl;
    std::cout << (  30 / 3 * 21 % 5) << std::endl;
    std::cout << ( -30 / 3 * 21 % 4) << std::endl;

    return 0;
}