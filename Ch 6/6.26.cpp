/**
 * Write a program that accepts the options presented in this
 * section. Print the values of the arguments passed to main.
 */

#include <iostream>

int main(int argc, char **argv) {
    for (int i = 0; i < argc; ++i) {
        std::cout << "argv[" << i << "]: " << argv[i] << std::endl;
    }

    return 0;
}