/**
 * Now print the elements in reverse order using ordinary
 * iterators
 */

#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>

int main() {
    std::vector<int> vec{1, 3, 4, 5, 6, 8, 9, 10, 14};

    for (auto it = vec.end()-1; it != vec.begin(); --it) {
        std::cout << *it << " ";
    }
    std::cout << *vec.begin() << std::endl;

    return 0;
}