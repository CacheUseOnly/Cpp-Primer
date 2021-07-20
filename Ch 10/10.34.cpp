/**
 * Use `reverse_iterator`s to print a `vector` in reverse
 * order.
 */

#include <iterator>
#include <vector>
#include <algorithm>
#include <iostream>

int main() {
    std::vector<int> vec{1, 3, 4, 5, 6, 8, 9, 10 , 14};

    std::for_each(vec.crbegin(), vec.crend(), [](const int& i) {
        std::cout << i << " "; 
    });

    return 0;
}