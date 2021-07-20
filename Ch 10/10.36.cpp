/**
 * Use find to find the last element in a list of ints with
 * value 0
 */

#include <vector>
#include <iostream>
#include <algorithm>

int main() {
    std::vector<int> vec{1, 4, 2, 3, 0, 4, 3, 2, 6, 4, 7, 0, 4, 7, 5, 4, 78, 9};

    auto it = std::find(vec.crbegin(), vec.crend(), 0);
    std::cout << "It appears at " << it - vec.crbegin() + 1 << " counted reversely.\n";
    
    return 0;
}