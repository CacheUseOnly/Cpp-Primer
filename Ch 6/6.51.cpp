/**
 * Write all four versions of f. Each function should print a
 * distinguishing message. Check your answers for the previous exercise. If your
 * answers were incorrect, study this section until you understand why your
 * answers were wrong.
 */
#include <iostream>

void f();
void f(int) {
    std::cout << "f(int)\n";
}

void f(int, int) {
    std::cout << "f(int, int)\n";
}

void f(double, double = 3.14) {
    std::cout << "f(double, double = 3.14)\n";
}

int main() {
    //f(2.56, 42);
    f(42);
    f(42, 0);
    f(2.56, 3.14);

    return 0;
}