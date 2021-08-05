/** 
 * Extend your program to ignore case and punctuation. For
 * example, “example.” “example,” and “Example” should all increment the same
 * counter
 */

#include <iostream>
#include <unordered_map>
#include <vector>
#include <string>
#include <algorithm>

int main() {
    std::vector<std::string> vec {"what", "the", "theta", "wut", "what", 
        "geez", "boredom", "exemplar", "graduate", "pressure", "partner",
        "partner", "geez", "Boredom", "boRedom", ".the", "the,", "The", "th(e"};

    std::unordered_map<std::string, unsigned> map;

    for (auto str : vec) {
        std::string word;
        std::for_each(str.begin(), str.end(), [&word](char &c) {
            if (isalpha(c)) {
                word += tolower(c);
            }
        });
        map[word]++;
    }

    for (auto entry : map) {
        std::cout << entry.first << " appears " << entry.second << " time(s).\n"; 
    }

    return 0;
}