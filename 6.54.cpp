/**
 * Write a declaration for a function that takes two int
 * parameters and returns an int, and declare a vector whose elements have
 * this function pointer type.
 */

#include <vector>

int foo(int, int);

using FP = decltype(foo);

int main() {
    std::vector<FP> vec;

    return 0;
}