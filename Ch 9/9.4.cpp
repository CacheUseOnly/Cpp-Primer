/**
 * Write a function that takes a pair of iterators to a
 * vector<int> and an int value. Look for that value in the range and return
 * a bool indicating whether it was found.
 */
#include <vector>
#include <iostream>

bool search(std::vector<int>::iterator begin, std::vector<int>::iterator end, int val);

int main() {
    std::vector<int> vec{2,6,8,9,4,46,56,32,16,984,26,78,62,431,86};
    std::vector<int>::iterator begin = vec.begin() + 3;
    std::vector<int>::iterator end = vec.begin() + 8;

    std::cout << ((search(begin, end, 4))? "found" : "negative");

    return 0;
}

bool search(std::vector<int>::iterator begin, std::vector<int>::iterator end, int val) {
    for (;begin != end; ++begin) {
        if (*begin == val) {
            return true;
        }
    }

    return false;
}