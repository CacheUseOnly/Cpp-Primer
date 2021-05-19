/**
 * Use accumulate to sum the elements in a vector<int>.
 */

#include <vector>
#include <numeric>
#include <iostream>

int main() {
    std::vector<int> vec{4, 5, 6, 1, 2, 43, 6, 23, 83, 239};

    std::cout << std::accumulate(vec.cbegin(), vec.cend(), 0);

    return 0;
}