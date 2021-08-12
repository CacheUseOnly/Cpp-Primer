/**
 * There are at least three ways to create the pairs in the
 * program for the previous exercise. Write three versions of that program,
 * creating the pairs in each way. Explain which form you think is easiest to
 * write and understand, and why
 */
#include <string>
#include <vector>
#include <iostream>
#include <iterator>

int main() {
    std::string str;
    int i;
    std::vector<std::pair<std::string, int>> vec_of_pair;

    for (int j = 0; j < 2; ++j) {
        std::cin >> str >> i;
        vec_of_pair.push_back({str, i});    // preferred way
        vec_of_pair.push_back(std::pair<std::string, int>(str, i));
        vec_of_pair.push_back(std::make_pair(str, i));
    }

    for (auto entry : vec_of_pair) {
        std::cout << "[" << entry.first << "," << entry.second << "]" << std::endl;
    }
    
    return 0;
}