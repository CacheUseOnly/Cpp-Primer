/**
 * Using fill_n, write a program to set a sequence of int
 * values to 0.
 */
#include <algorithm>
#include <vector>
#include <iostream>

int main() {
    std::vector<int> vec{3, 5, 1, 2, 4, 6, 5, 7, 19};

    std::fill_n(vec.begin(), vec.size(), 0);

    std::cout << "[";
    for(auto i : vec) {
        std::cout << i << " ";
    }
    std::cout << "]";

    return 0;
}