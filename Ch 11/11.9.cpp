/**
 * Define a `map` that associates words with a `list` of line
 * numbers on which the word might occur
 */

#include <map>
#include <list>
#include <string>
#include <iostream>

int main() {
    std::map<std::string, std::list<unsigned>> map;
    map.emplace("placeholder", std::list<unsigned>{1, 3, 6, 8, 11, 13, 14});
    map.emplace("another", std::list<unsigned>{4, 6, 7, 8, 9, 11, 12, 14, 15});

    for (auto pair : map) {
        std::cout << pair.first << ": ";
        for (auto line : pair.second) {
            std::cout << line << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}