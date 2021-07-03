/**
 * Use `bind` and `check_size` to find the first element in a 
 * vector of `ints` that has a value greater than the length
 * of a specified string value
 */

#include <algorithm>
#include <iostream>
#include <string>
#include <functional>
#include <vector>

bool check_size(std::string& str, std::size_t sz) {
    return str.size() > sz;
}

int main() {
    std::size_t length = 9;
    std::vector<std::string> vec{"allocator", "amon", "exemplar", "raspberry", "communication", "goodbye"};

    auto it = std::find_if(vec.begin(), vec.end(), std::bind(check_size, std::placeholders::_1, length));
    std::cout << "It's at: " << it-vec.begin() << std::endl;

    return 0;
}