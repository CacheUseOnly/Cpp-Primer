/**
 * Write a function that takes an int and a pointer to an int
 * and returns the larger of the int value or the value to which the pointer
 * points. What type should you use for the pointer?
 */
#include<iostream>

int max(int var1, int* var2);

int main() {
    int a = 6, b = 5;
    int* ptr = &b;
    std::cout << "a: " << a << " b: " << b << " - max is: " << max(a, ptr);

    return 0;
}

int max(int var1, int* var2) {
    return ((var1 > *var2)? var1 : *var2);
}