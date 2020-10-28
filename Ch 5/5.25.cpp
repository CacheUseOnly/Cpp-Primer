/* 
 * Revise your program from the previous exercise to use a
 * try block to catch the exception. The catch clause should print a message
 * to the user and ask them to supply a new number and repeat the code inside
 * the try.
 */

#include <iostream>

int main() {
    int a, b;
    
    std::cout << "Please input two numbers: ";
    std::cin >> a >> b;
    try {
        if (b == 0) {
            throw std::logic_error("Divide by zero");
        }
        std::cout << "Quotient is: " << a/b;
    } catch(std::logic_error &err) {
        std::cout << err.what() << " terminated.";
    }

    return 0;
}