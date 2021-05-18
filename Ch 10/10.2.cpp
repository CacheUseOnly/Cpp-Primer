/**
 * Repeat the previous program, but read values into a list of
 * strings
 */

#include <list>
#include <algorithm>
#include <iostream>
#include <string>

int main() {
    std::list<std::string> lst{"Hi", "what ", "is", "hi", "Hi", "huh", "aight", "K&R"};

    std::cout << std::count(lst.cbegin(), lst.cend(), "Hi");

    return 0;
}