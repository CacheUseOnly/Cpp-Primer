/**
 * Using pointers, write a function to swap the values of two
 * ints. Test the function by calling it and printing the swapped values.
 */

#include <iostream>

void swap(int *a, int *b);

int main() {
    int a = 5, b = 3;
    swap(&a, &b);

    std::cout << "a: " << a << " b: " << b;

    return 0;
}

void swap(int *a, int *b) {
    int temp = *b;
    *b = *a;
    *a = temp;
}