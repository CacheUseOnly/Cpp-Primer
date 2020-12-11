/**
 * Write a main function that takes two arguments.
 * Concatenate the supplied arguments and print the resulting string.
 */

#include <iostream>

int main(int argc, char* argv[]) {
    for (int i = 1; i < argc; ++i) {
        std::cout << argv[i];
    }

    return 0;
}