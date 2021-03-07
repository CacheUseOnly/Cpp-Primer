/**
 * Rewrite the previous exercise using a position and length to
 * manage the strings. This time use only the insert function.
 */

#include <string>
#include <iostream>

std::string modStr(std::string name, std::string prefix, std::string suffix);

int main() {
    std::string name = "Ophelia";

    std::cout << modStr(name, "Ms.", "Jr.");

    return 0;
}

std::string modStr(std::string name, std::string prefix, std::string suffix) {
    auto it = name.begin();
    name.insert(it, prefix.begin(), prefix.end());
    name.insert(name.end(), suffix.begin(), suffix.end());

    return name;
}