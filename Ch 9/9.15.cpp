/**
 * Write a program to determine whether two vector<int>s
 * are equal.
 */

#include <vector>
#include <iostream>

bool vecEqual(const std::vector<int> vec1, const std::vector<int> vec2);

int main() {
    std::vector<int> vec1 = {1, 2, 3}, vec2 = {2, 3, 4}, vec3 = {1, 2, 3};

    std::cout << "vec1 and vec2 are " << (vecEqual(vec1, vec2) ? "equal" : "not equal") << std::endl;
    std::cout << "vec1 and vec3 are " << (vecEqual(vec1, vec3) ? "equal" : "not equal") << std::endl;

    return 0;
}

bool vecEqual(const std::vector<int> vec1, const std::vector<int> vec2) {
    return (vec1 == vec2);
}