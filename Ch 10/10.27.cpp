/**
 * In addition to unique (§ 10.2.3, p. 384), the library
 * defines function named unique_copy that takes a third iterator denoting a
 * destination into which to copy the unique elements. Write a program that
 * uses unique_copy to copy the unique elements from a vector into an
 * initially empty list.
 */

#include <iostream>
#include <algorithm>
#include <vector>

int main() {
    std::vector<int> vec{2, 2, 2, 2, 4, 3, 8};
    std::vector<int> copied;
    std::unique_copy(vec.begin(), vec.end(), std::inserter(copied, copied.begin()));

    for (auto i : copied) {
        std::cout << i << " ";
    }
    std::cout << std::endl;

    return 0;
}