/**
 * Write a function that takes an initializer_list<int>
 * and produces the sum of the elements in the list.
 */

#include <list>
#include <iostream>

void print(const std::initializer_list<int> list);

int main() {
    std::initializer_list<int> myList{1,3,5,6,8};
    print(myList);

    return 0;
}

void print(const std::initializer_list<int> list) {
    for (auto i : list) {
        std::cout << i << std::endl;
    }
}