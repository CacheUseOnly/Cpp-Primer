/**
 * @file 11.33.cpp
 * @author Cache_use_only
 * @brief
 * Implement your own version of the word-transformation
 * program.
 * @version 0.1
 * @date 2021-09-26
 *
 * @copyright Copyright (c) 2021
 *
 */

#include <iostream>
#include <sstream>
#include <string>
#include <unordered_map>
#include <vector>

std::vector<std::string> splitString(const std::string str);
std::string convert(const std::string str);

std::unordered_map<std::string, std::string> dict = {
    std::make_pair("k", "okay?"),     std::make_pair("brb", "be right back"),
    std::make_pair("y", "why"),       std::make_pair("r", "are"),
    std::make_pair("u", "you"),       std::make_pair("pic", "picture"),
    std::make_pair("thk", "thanks!"), std::make_pair("l8r", "later")};

int main() {
    std::string input = "where r u";
    std::string result = "";

    std::vector<std::string> splitted = splitString(input);
    for (auto str : splitted) {
        result.append(convert(str) + ' ');
    }

    std::cout << "Input: " << input << "\nOutput: " << result << std::endl;

    return 0;
}

std::vector<std::string> splitString(const std::string str) {
    std::stringstream ss(str);
    std::vector<std::string> ret;
    std::string temp;

    while (std::getline(ss, temp, ' ')) {
        ret.push_back(temp);
    }

    return ret;
}

std::string convert(const std::string str) {
    auto pt = dict.find(str);

    return ((pt != dict.cend()) ? pt->second : str);
}