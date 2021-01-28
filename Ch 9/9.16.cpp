/**
 * Repeat the previous program, but compare elements in a
 * list<int> to a vector<int>.
 */

#include <list>
#include <vector>
#include <iostream>

bool isEqual(const std::list<int> lst, const std::vector<int> vec);

int main() {
    std::list<int> lst = {1, 3, 4, 5, 7};
    std::vector<int> vec = {1, 3, 4, 5, 6}, vec2 = {1, 3, 4, 5, 7};

    std::cout << "lst and vec are " << ((isEqual(lst, vec) ? "equal" : "not equal")) << std::endl;
    std::cout << "lst and vec2 are " << ((isEqual(lst, vec2) ? "equal" : "not equal")) << std::endl;

    return 0;
}

bool isEqual(const std::list<int> lst, const std::vector<int> vec) {
    if (lst.size() != vec.size()) {
        return false;
    }

    for (int i = 0; i < lst.size(); ++i) {
        auto it = lst.begin();
        std::advance(it, i);
        if(*it != vec[i]) {
            return false;
        }
    }

    return true;
}