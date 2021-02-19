/**
 * Write a program to explore how vectors grow in the library
 * you use.
 */

#include <vector>
#include <iostream>

int main() {
    std::vector<int> vi = {2, 4};

    for (int i = 0; i < 8; ++i) {
        std::cout << "Current size: " << vi.size() << " capacity: " << vi.capacity() << std::endl;
        vi.push_back(42);
    }

    return 0;
}