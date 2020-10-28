/* 
 * Revise your program to throw an exception if the second
 * number is zero. Test your program with a zero input to see what happens on
 * your system if you don’t catch an exception.
 */

#include <iostream>

int main() {
    int a, b;
    
    std::cout << "Please input two numbers: ";
    std::cin >> a >> b;
    if (b == 0) {
        throw std::logic_error("Divide by zero");
    }
    std::cout << "Quotient is: " << a/b;
    return 0;
}