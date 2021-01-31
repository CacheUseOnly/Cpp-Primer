/**
 * Rewrite the program from the previous exercise to use a
 * list. List the changes you needed to make.
 */

#include <string>
#include <iostream>
#include <list>

int main() {
    std::string buffer;
    std::list<std::string> lst;

    for (int i = 0; i < 3; ++i) {
        std::cin >> buffer;
        lst.push_back(buffer);
    }

    for (std::list<std::string>::const_iterator it = lst.cbegin(); it != lst.cend(); ++it) {
        std::cout << *it << std::endl;
    }

    return 0;
}

// basically no change