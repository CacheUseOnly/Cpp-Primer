/**
 * @file 11.28.cpp
 * @author Yuxuan Luo
 * @brief Define and initialize a variable to hold the result of calling
 * `find` on a `map` from `string` to `vector` of `int`
 * @version 0.1
 * @date 2021-08-13
 * 
 * @copyright Copyright (c) 2021
 */

#include <map>
#include <string>
#include <vector>
#include <iostream>

int main() {
    std::map<std::string, std::vector<int>> map;
    map["odd"] = {1, 3, 5, 7, 9};
    map["even"] = {2, 4, 6, 8, 10};
    map["prime"] = {3, 5, 7, 11};

    auto ret = map.find("odd");
    // std::map<std::string, std::vector<int>>::iterator

    std::cout << "type: " << typeid(decltype(ret)).name();
    return 0;
}