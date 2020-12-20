// Write a recursive function to print the contents of a vector.

#include <iostream>
#include <vector>

void printVec(std::vector<int>::iterator it, std::vector<int>::iterator end);

int main() {
    std::vector<int> vec{1, 3, 4, 5, 7, 8, 9};

    printVec(vec.begin(), vec.end());

    return 0;
}

void printVec(std::vector<int>::iterator it, std::vector<int>::iterator end) {
    std::cout << (*it) << " ";
    if (it != end) {
        printVec(++it, end);
    }
}