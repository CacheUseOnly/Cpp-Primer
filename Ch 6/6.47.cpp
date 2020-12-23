/**
 * Revise the program you wrote in the exercises in § 6.3.2 (p.
 * 228) that used recursion to print the contents of a vector to conditionally
 * print information about its execution. For example, you might print the size of
 * the vector on each call. Compile and run the program with debugging
 * turned on and again with it turned off.
 */

#include <iostream>
#include <vector>

void printVec(std::vector<int>::iterator it, std::vector<int>::iterator end);

int main() {
    std::vector<int> vec{1, 3, 4, 5, 7, 8, 9};

    printVec(vec.begin(), vec.end());

    return 0;
}

void printVec(std::vector<int>::iterator it, std::vector<int>::iterator end) {
    #ifndef NDEBUG
    std::cout << "\nTime of execution remain: " << (end - it) << " ";
    #endif
    std::cout << (*it) << " ";
    if (it != end) {
        printVec(++it, end);
    }
}