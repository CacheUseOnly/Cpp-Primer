/**
 * Implement your own version of elimDups. Test your
 * program by printing the vector after you read the input, after the call to
 * unique, and after the call to erase.
 */
#include <algorithm>
#include <string>
#include <vector>
#include <iostream>
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
    std::vector<std::string> vec{"fox", "jumps", "over", "quick", "red", "slow", "red", "the", "the"};
    std::vector<std::string> myOwn = vec, textbook = vec;

    elimDups(myOwn);

    std::sort(textbook.begin(), textbook.end());
    auto end_unique = std::unique(textbook.begin(), textbook.end());
    textbook.erase(end_unique, textbook.end());

    std::cout << (myOwn==textbook);

    return 0;
}