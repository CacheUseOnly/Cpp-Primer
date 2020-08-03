// Write an expression to determine whether an int value is even or odd. 

#include <iostream>

int main() {
    int i = 5;

    std::cout << ((i%2 == 0) ? "even" : "odd");

    return 0;
}