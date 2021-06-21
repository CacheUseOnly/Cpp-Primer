/**
 * Write a lambda that captures an int from its enclosing
 * function and takes an int parameter. The lambda should return the sum of
 * the captured int and the int parameter.
 */

#include <iostream>

int main() {
    int var = 4;
    auto func = [var](int var2){
        return var + var2;
    };

    std::cout << "4+6 = " << func(6) << std::endl;
    return 0;
}