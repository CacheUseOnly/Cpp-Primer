/**
 * The algorithm header defines a function named count
 * that, like find, takes a pair of iterators and a value. count returns a count
 * of how often that value appears. Read a sequence of ints into a vector
 * and print the count of how many elements have a given value.
 */
#include <algorithm>
#include <vector>
#include <iostream>

int main() {
    std::vector<int> vec{1, 3, 4, 5, 4, 2, 3, 4, 6, 8, 7, 19};

    std::cout << std::count(vec.cbegin(), vec.cend(), 4); 

    return 0;
}