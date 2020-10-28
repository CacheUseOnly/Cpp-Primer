/* 
 * Write a program that reads two integers from the standard
 * input and prints the result of dividing the first number by the second.
 */

#include <iostream>

int main() {
    int a, b;
    
    std::cout << "Please input two numbers: ";
    std::cin >> a >> b;
    std::cout << "Quotient is: " << a/b;

    return 0;
}