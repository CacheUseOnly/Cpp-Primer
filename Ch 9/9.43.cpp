/**
 * Write a function that takes three strings, s, oldVal, and
 * newVal. Using iterators, and the insert and erase functions replace all
 * instances of oldVal that appear in s by newVal. Test your function by
 * using it to replace common abbreviations, such as “tho” by “though” and
 * “thru” by “through”.
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
        if (*it == oldVal[0]) {
            int i = 0;
            bool doesntMatch = false;
            for (auto itr2 = oldVal.begin(); itr2 != oldVal.end(); ++itr2, ++i) {
                if (*(it + i) != *itr2) {
                    doesntMatch = true;
                    break;
                }
            }
            if (!doesntMatch) {
                s.erase(it, (it + oldVal.size()));
                s.insert(it, newVal.begin(), newVal.end());
            }
        }
    }
}