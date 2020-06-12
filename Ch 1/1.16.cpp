/*
 * Write your own version of a program that prints the sum of a set of integers read from cin.
 */

#include <iostream>

int main() {
    int num1, num2;

    std::cout << "Please input two number: ";
    std::cin >> num1 >> num2;
    std::cout << "The sum of your input is: " << num1 + num2 << std::endl;

    return 0;
}