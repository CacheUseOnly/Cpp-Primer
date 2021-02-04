/**
 * Write a program that fetches the first element in a vector
 * using at, the subscript operator, front, and begin. Test your program on
 * an empty vector.
 */

#include <vector>
#include <iostream>

int main() {
    std::vector<int> ivec = {1, 3, 4, 6, 7}, emptyVec = {};

    std::cout << "at: " << ivec.at(0) << "\n"
        << "subscript: " << ivec[0] << "\n"
        << "front: " << ivec.front() << "\n"
        << "begin: " << *(ivec.begin()) << std::endl;

    std::cout << "at: " << emptyVec.at(0) << std::endl
        << "subscript: " << emptyVec[0] << std::endl        // seg fault
        << "front: " << emptyVec.front() << std::endl       // seg fault
        << "begin: " << *(emptyVec.begin()) << std::endl;   // seg fault

    return 0;
}

// at:  terminate called after throwing an instance of 'std::out_of_range'
//  what():  vector::_M_range_check: __n (which is 0) >= this->size() (which is 0)

