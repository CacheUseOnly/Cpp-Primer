/**
 * Write your own version of the biggies function using
 * lambdas.
 */

#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <set>

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

int main() {
    const unsigned length = 4;
    std::vector<std::string> vec 
        {"monster", "monster", "again", "warden", "foo", 
        "octopus", "doo", "foo", "suffocation", "periphery", 
        "monitor", "terminal", "monitor", "lunch", "entertaining"};

    std::stable_sort(vec.begin(), vec.end(), [](const std::string& str1, const std::string& str2) {
        return str1 < str2;
    });
    elimDups(vec);
    auto it = std::partition(vec.begin(), vec.end(), [length](const std::string& str) {
        return str.size() >= length;
    });

    std::for_each(vec.begin(), it, [](const std::string& str) {
        std::cout << str << " ";
    });
    std::cout << std::endl;

    return 0;
}