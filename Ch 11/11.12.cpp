/**
 * Write a program to read a sequence of `string`s and `int`s
 * storing each into a `pair`. Store the `pair`s in a `vector`
 */

#include <string>
#include <vector>
#include <iostream>
#include <iterator>

int main() {
    std::string str;
    int i;
    std::vector<std::pair<std::string, int>> vec_of_pair;

    for (int j = 0; j < 4; ++j) {
        std::cin >> str >> i;
        vec_of_pair.push_back({str, i});
    }

    for (auto entry : vec_of_pair) {
        std::cout << "[" << entry.first << "," << entry.second << "]" << std::endl;
    }
    
    return 0;
}