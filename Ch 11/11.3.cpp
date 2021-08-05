/**
 * Write your own version of the word-counting program
 */

#include <iostream>
#include <unordered_map>
#include <vector>
#include <string>

int main() {
    std::vector<std::string> vec {"what", "the", "theta", "wut", "what", 
        "geez", "boredom", "exemplar", "graduate", "pressure", "partner",
        "partner", "geez", "boredom", "boredom", "the", "the", "the", "the"};

    std::unordered_map<std::string, unsigned> map;

    for (const auto str : vec) {
        map[str]++;
    }

    for (auto entry : map) {
        std::cout << entry.first << " appears " << entry.second << " time(s).\n"; 
    }

    return 0;
}