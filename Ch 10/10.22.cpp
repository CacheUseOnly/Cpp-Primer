/**
 * Rewrite the program to count words of size 6
 * or less using functions in places of the lambdas
 */

#include <functional>
#include <algorithm>
#include <iostream>
#include <vector>
#include <string>

using namespace std::placeholders;

bool isLess(std::string& str) {
    return str.size() <= 6;
}

int main() {
    std::vector<std::string> vec {"cool", "foo", "alright", "allocator", "cutomizing", "parameters"};

    std::cout << std::count_if(vec.begin(), vec.end(), isLess);

    return 0;
}