/**
 * Define a map for which the key is the family’s last name and
 * the value is a vector of the children’s names. Write code to add new
 * families and to add new children to an existing family.
 */

#include <unordered_map>
#include <vector>
#include <string>
#include <iostream>

int main() {
    std::unordered_map<std::string, std::vector<std::string>> map;

    map["Kennedy"].push_back("John");
    map["Kennedy"].push_back("Jack");
    map["Kennedy"].push_back("Ophelia");
    map["Kennedy"].push_back("Tim");

    map["Brown"].push_back("Jack");
    map["Brown"].push_back("Ophelia");

    for (auto pair : map) {
        std::cout << pair.first << " family: " << std::endl;
        for (auto name : pair.second) {
            std::cout << name << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}