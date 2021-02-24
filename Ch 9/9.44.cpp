/**
 * Rewrite the previous function using an index and replace.
 */

#include <string>
#include <iostream>

void replace(std::string &s, const std::string oldVal, const std::string newVal);

int main() {
    std::string old = "tho", newVal = "thro", str = "though";
    replace(str, old, newVal);
    std::cout << str;
    return 0;    
}

void replace(std::string &s, const std::string oldVal, const std::string newVal) {
    for (auto it = s.begin(); it != s.end(); ++it) {
        if (std::string(it, it+oldVal.size()) == oldVal) {
            s.replace(it, it + oldVal.size(), newVal);
        }
    }
}