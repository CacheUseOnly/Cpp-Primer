/**
 * Write and test your own version of reset that takes a
 * reference.
 */
#include <iostream>

void reset(int &i);

int main() {
    int i = 8;
    reset(i);
    std::cout << "reset(i): " << i;

    return 0;
}

void reset(int &i) {
    i = 0;
}