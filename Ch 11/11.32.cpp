/**
 * @file 11.32.cpp
 * @author 
 * @brief Using the multimap from the previous exercise, write a
 * program to print the list of authors and their works alphabetically
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

    return 0;
}