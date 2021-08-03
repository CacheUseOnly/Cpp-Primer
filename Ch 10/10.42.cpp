/**
 * Reimplement the program that eliminated duplicate words
 * that we wrote in § 10.2.3 (p. 383) to use a list instead of a vector.
 */

#include <iostream>
#include <algorithm>
#include <list>
#include <string>
#include <unordered_map>

void elimDup(std::list<std::string> lst) {
    std::unordered_map<std::string, unsigned> map;
    for (std::string str : lst) {
        map[str]++;
    }

    for (auto entry : map) {
        if (entry.second > 1) {
            lst.remove(entry.first);
            lst.insert(lst.cend(), entry.first);
        }
    }

    for (auto str : lst) {
        std::cout << str << " ";
    }
}

int main() {
    std::list<std::string> lst {"unique", "boo", "allocator", "CUDA", "nasdaq", "bottle", "boo", "cache", "noise", "noise", "nasdaq", "laptop"};

    elimDup(lst);

    return 0;
}
