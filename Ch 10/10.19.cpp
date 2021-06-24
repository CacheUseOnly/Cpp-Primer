/**
 * Rewrite the previous exercise to tuse `stable_partition`,
 * which like `stable_sort` maintains the original element order
 * in the partitioned sequence.
 */

#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
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

void biggies (std::vector<std::string> &words, std::vector<std::string>::size_type sz) {
    elimDups(words);
    std::stable_sort(words.begin(), words.end(), [](const std::string& str1, const std::string& str2) {
        return str1.size() < str2.size();
    });

    auto it = std::stable_partition(words.begin(), words.end(), [sz](const std::string str) {
        return str.size() >= sz;
    });

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