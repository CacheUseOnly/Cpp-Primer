/* 
 * Write a function that interacts with the user, asking for a
 * number and generating the factorial of that number. 
 * Call this function from main.
 */
#include <iostream>

bool calcFacto();

int main() {
    while(calcFacto()){}

    return 0;
}

bool calcFacto() {
    int n, fact = 1;

    std::cout << "Please input the number, -1 to quit: ";
    std::cin >> n;

    if (n == -1) {
        return false;
    }

    for (int i = n; i > 0; --i) {
        fact *= i;
    }

    std::cout << "The factorial is: " << fact << std::endl;
    return true;
}