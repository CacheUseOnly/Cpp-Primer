/**
 * In the exercises for 10.3.2(p. 392) you wrote
 * a version of `biggies` that uses `partition`.
 * Rewrite that function to use `check_size` and bind.
 */

#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <functional>

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

bool check_size(std::string& str, std::size_t sz) {
    return str.size() > sz;
}

void biggies (std::vector<std::string> &words, std::vector<std::string>::size_type sz) {
    elimDups(words);
    std::stable_sort(words.begin(), words.end(), [](const std::string& str1, const std::string& str2) {
        return str1.size() < str2.size();
    });

    auto it = std::partition(words.begin(), words.end(), std::bind(check_size, std::placeholders::_1, sz)); 

    std::for_each(words.begin(), it,[](const std::string &str) {
        std::cout << str << " ";
    });
}

int main() {
    const unsigned length = 4;
    std::vector<std::string> vec 
        {"monster", "monster", "again", "warden", "foo", 
        "octopus", "doo", "foo", "suffocation", "periphery", 
        "monitor", "terminal", "monitor", "lunch", "entertaining"};

    biggies(vec, length);

    return 0;
}