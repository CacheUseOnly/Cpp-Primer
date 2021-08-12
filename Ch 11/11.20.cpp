/**
 * Rewrite the word-counting program from § 11.1 (p. 421) to
 * use insert instead of subscripting. Which program do you think is easier to
 * write and read? Explain your reasoning
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
        ++map.insert({str, 0}).first->second;
    }

    for (auto entry : map) {
        std::cout << entry.first << " appears " << entry.second << " time(s).\n"; 
    }

    return 0;
}

// Subscripting FTW