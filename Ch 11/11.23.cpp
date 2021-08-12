/**
 * Rewrite the map that stored vectors of children’s names
 * with a key that is the family last name for the exercises in § 11.2.1 (p. 424)
 * to use a multimap.
 */

#include <map>
#include <vector>
#include <string>
#include <iostream>

int main() {
    std::multimap<std::string, std::vector<std::string>> dict;

    dict.emplace("fam", std::vector<std::string>{"one", "two", "three", "four"});
    dict.emplace("wut", std::vector<std::string>{"1", "2", "3"});
    dict.emplace("fam", std::vector<std::string>{"deux", "toi"});

    for (auto family : dict) {
        std::cout << family.first << ":\n";
        for (auto name : family.second) {
            std::cout << "- " << name << std::endl;
        }
    }

    return 0;
}