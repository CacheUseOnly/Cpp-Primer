/**
 * Rewrite the program from exercise 6.10 in § 6.2.1 (p. 210)
 * to use references instead of pointers to swap the value of two ints. Which
 * version do you think would be easier to use and why?
 */

#include <iostream>

void swap(int &a, int &b);

int main() {
    int a = 5, b = 3;
    swap(a, b);

    std::cout << "a: " << a << " b: " << b;

    return 0;
}

void swap(int &a, int &b) {
    int temp = b; 
    b = a;
    a = temp;
}