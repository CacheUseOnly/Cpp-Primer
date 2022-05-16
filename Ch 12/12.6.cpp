/**
 * @file 12.6.cpp
 * @author your name (you@domain.com)
 * @brief Write a function that returns a dynamically allocated vector
 * of ints. Pass that vector to another function that reads the standard input
 * to give values to the elements. Pass the vector to another function to print
 * the values that were read. Remember to delete the vector at the
 * appropriate time
 * @version 0.1
 * @date 2022-05-16
 *
 * @copyright Copyright (c) 2022
 *
 */

#include <iostream>
#include <vector>

std::vector<int>* init() {
    auto p = new std::vector<int>();
    return p;
}

std::vector<int>* read(std::vector<int>* vec) {
    int num = 0;
    for (int i = 0; i < 3; ++i) {
        std::cin >> num;
        vec->push_back(num);
    }

    return vec;
}

std::vector<int>* print(std::vector<int>* vec) {
    for (auto const entry : *vec) {
        std::cout << entry << ", ";
    }

    return vec;
}

int main() {
    auto p = init();
    p = read(p);
    p = print(p);

    delete p;
    p = nullptr;

    return 0;
}
