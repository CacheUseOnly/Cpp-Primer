// Write a function to return the absolute value of its argument

#include <iostream>

int absVar(int value);

int main() {
    std::cout << "Absolute value of 4 is: " << absVar(4) << " , of -5 is: " << absVar(-5) << std::endl;

    return 0;
}

int absVar(int value) {
    return ((value < 0) ? -value : value);
}