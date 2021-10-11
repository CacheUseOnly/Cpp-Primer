/**
 * @file 11.38.cpp
 * @author Cache_use_only
 * @brief
 * Rewrite the word-counting (§ 11.1, p. 421) and wordtransformation
 * (§ 11.3.6, p. 440) programs to use an unordered_map.
 * @version 0.1
 * @date 2021-10-11
 *
 * @copyright Copyright (c) 2021
 *
 */

#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>
#include <sstream>
#include <algorithm>

int main() {
    std::string input =
        "lorem ipsum is a sentence appears in multiple typography design page. "
        "People use this sentence to sentence others' death. This appears to "
        "be a joke. By design. I can keep writing for multiple more lines.";

    std::unordered_map<std::string, unsigned> map;
    std::vector<std::string> sVec;

    input.erase(std::remove(input.begin(), input.end(), '.'), input.end());
    std::istringstream iss(input);
    std::string temp;
    while (std::getline(iss, temp, ' ')) {
        sVec.push_back(temp);
    }

    for (const auto str : sVec) {
        ++map.insert({str, 0}).first->second;
    }

    for (auto entry : map) {
        std::cout << entry.first << " appears " << entry.second << " time(s)\n";
    }

    return 0;
}