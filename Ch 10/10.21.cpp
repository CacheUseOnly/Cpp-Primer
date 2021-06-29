/**
 * Write a lambda that captures a local `int` variable and 
 * decrements that variable until it reaches 0. Once the variable
 * is 0 additional calls should no longer decrement the variable.
 * The lambda should return a `bool` that indicates whether the 
 * captured variable is 0.
 */

#include <iostream>
#include <algorithm>

int main() {
    int i = 7;
    auto check_and_decrement = [&i]() { return i > 0 ? !--i : !i; };
    
    int var = 7;
    auto fn = [var]() mutable -> bool {
        if (var == 0) {
            return true;
        } else {
            --var;
            return false;
        }
    };

    while (!check_and_decrement()) {
        std::cout << "`i` is now: " << i << std::endl;
    }
    std::cout << "`i` is now: " << i << std::endl;

    while (!fn()) {
        std::cout << "`var` is now: " << var << std::endl;
    }
    std::cout << "`var` is now: " << var << std::endl;
    return 0;
}