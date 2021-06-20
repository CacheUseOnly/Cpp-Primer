/**
 * Write a lambda that takes two ints and returns their sum.
 */

#include <iostream>

int main() {
    auto lambda = [](const int& var1, const int& var2) {
        return var1+var2;
    };

    std::cout << "res: " << lambda(4, 8);

    return 0;
}