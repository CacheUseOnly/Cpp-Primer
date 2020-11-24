// Write and test your own version of `fact`
#include <iostream>
#include "6.8.h"

int main() {
    std::cout << "Factorial of 6 is: " << fact(6);

    return 0;
}

int fact(int n) {
    if (n == 1) {
        return 1;
    } else {
        return n*fact(n-1);
    }
}