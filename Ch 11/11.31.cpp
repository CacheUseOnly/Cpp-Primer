/**
 * @file 11.31.cpp
 * @author 
 * @brief Write a program that defines a multimap of authors and
 * their works. Use find to find an element in the multimap and erase that
 * element. Be sure your program works correctly if the element you look for is
 * not in the map
 * @version 0.1
 * @date 2021-08-13
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include <map>
#include <iostream>
#include <string>
#include <vector>

int main() {
    std::multimap<std::string, std::vector<std::string>> map;
    map.insert({"writer1", {"1", "2", "3", "4"}});
    map.insert({"writer2", {"one", "two", "three", "four"}});
    map.insert({"writer1", {"1.1", "2.1", "3.1", "4.1"}});
    
    for (auto entry : map) {
        std::cout << entry.first << ":\n";
        for (auto work : entry.second) {
            std::cout << "- " << work << std::endl;
        }
    }

    if (map.find("writer1") != map.end()) {
        map.erase("writer1");
    }

    std::cout << "\n\nAfter erased:\n";

    for (auto entry : map) {
        std::cout << entry.first << ":\n";
        for (auto work : entry.second) {
            std::cout << "- " << work << std::endl;
        }
    }

    return 0;
}