/*
 * Given two vectors of ints, write a program to determine
 * whether one vector is a prefix of the other. For vectors of unequal
 * length, compare the number of elements of the smaller vector. For
 * example, given the vectors containing 0, 1, 1, and 2 and 0, 1, 1, 2, 3, 5,
 * 8, respectively your program should return true.
 */

#include <iostream>
#include <vector>

bool isPrefix(std::vector<int> vec1, std::vector<int> vec2);

int main() {
    std::vector<int> vec1 = {1, 2, 3, 4};
    std::vector<int> vec2 = {1, 2, 3, 4, 7, 8};

    std::cout << isPrefix(vec1, vec2);
}

bool isPrefix(std::vector<int> vec1, std::vector<int> vec2)
{
    if (vec1.size() > vec2.size()) {
        return isPrefix(vec2, vec1);
    }

    for (int i = 0; i < vec1.size(); ++i) {
        if (vec1[i] != vec2[i]){
            return false;
        }
    }

    return true;
}