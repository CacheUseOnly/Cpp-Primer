/**
 * Rewrite the previous program to return an iterator to the
 * requested element. Note that the program must handle the case where the
 * element is not found.
 */

#include <vector>
#include <iostream>

std::vector<int>::iterator search(std::vector<int>::iterator begin, std::vector<int>::iterator end, int val);

int main() {
    std::vector<int> vec{2,6,8,9,4,46,56,32,16,984,26,78,62,431,86};
    std::vector<int>::iterator begin = vec.begin() + 3;
    std::vector<int>::iterator end = vec.begin() + 8;

    std::cout << (((vec.begin() + 5) == search(begin, end, 46)) ? "it's at 5th place" : "it's not at 5th");

    return 0;
}

std::vector<int>::iterator search(std::vector<int>::iterator begin, std::vector<int>::iterator end, int val) {
    for (;begin != end; ++begin) {
        if (*begin == val) {
            return begin;
        }
    }

    return end;
}