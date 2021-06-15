/**
 * Write a program that uses stable_sort and isShorter
 * to sort a vector passed to your version of elimDups. Print the vector to
 * verify that your program is correct.
 */

#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#include <string>

void elimDups(std::vector<std::string> &strVec) {
    std::set<std::string> set;
    std::set<std::vector<std::string>::iterator> toDelete;

    for (auto it = strVec.begin(); it != strVec.end(); ++it) {
        if (set.find(*it) == set.end()) {
            set.insert(*it);
        } else {
            toDelete.insert(it);
        }
    }

    for (auto it : toDelete) {
        strVec.erase(it);
    }
}

bool isShorter(const std::string &str1, const std::string &str2) {
    return str1.length() < str2.length();
}

int main() {
    std::vector<std::string> vec{"fox", "jumps", "over", "quick", "red", "slow", "red", "the", "the"};

    std::stable_sort(vec.begin(), vec.end(), isShorter);
    elimDups(vec);

    for (auto s : vec) {
        std::cout << s << " ";
    }
    std::cout << std::endl;
 
    return 0;
}