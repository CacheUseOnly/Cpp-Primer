/**
 * Write your own versions of the fact.cc and factMain.cc
 * files. These files should include your Chapter6.h from the exercises in the
 * previous section. Use these files to understand how your compiler supports
 * separate compilation.
 */

#include "6.8.h"
#include <iostream>

int main() {
    std::cout << "facto of 5: " << fact(5);

    return 0;
}