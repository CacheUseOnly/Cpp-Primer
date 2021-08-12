/**
 * Extend the map of children to their family name that you
 * wrote for the exercises in § 11.2.1 (p. 424) by having the vector store a
 * pair that holds a child’s name and birthday
 */

#include <map>
#include <vector>
#include <string>
#include <iostream>

int main() {
    std::map<std::string, std::vector<std::pair<std::string, std::string>>> dict;

    dict["Lee"].push_back({"Bruce", "10-3"});
    dict["Lee"].push_back({"Dickinson", "9-3"});
    dict["Lee"].push_back({"Daniel", "7-9"});

    dict["Pane"].push_back({"Karen", "2-3"});
    dict["Pane"].push_back({"Ben", "9-12"});
    dict["Pane"].push_back({"Carlson", "6-18"});

    for (auto family : dict) {
        std::cout << family.first << " family:\n";
        for (auto member : family.second) {
            std::cout << " - " << member.first << " born on " << member.second << std::endl;
        } 
    }

    return 0;
}