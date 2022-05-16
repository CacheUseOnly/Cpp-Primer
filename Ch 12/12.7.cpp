/**
 * @file 12.7.cpp
 * @author your name (you@domain.com)
 * @brief Redo the previous exercise, this time using shared_ptr
 * @version 0.1
 * @date 2022-05-16
 *
 * @copyright Copyright (c) 2022
 *
 */

#include <iostream>
#include <memory>
#include <vector>

std::shared_ptr<std::vector<int>> init() {
    std::shared_ptr<std::vector<int>> p(new std::vector<int>);
    return p;
}

std::shared_ptr<std::vector<int>> read(std::shared_ptr<std::vector<int>> vec) {
    int num = 0;
    for (int i = 0; i < 3; ++i) {
        std::cin >> num;
        vec->push_back(num);
    }

    return vec;
}

std::shared_ptr<std::vector<int>> print(std::shared_ptr<std::vector<int>> vec) {
    for (auto const entry : *vec) {
        std::cout << entry << ", ";
    }

    return vec;
}

int main() {
    auto p = init();
    p = read(p);
    p = print(p);

    return 0;
}
