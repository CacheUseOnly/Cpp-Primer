/**
 * Given a vector that has ten elements, copy the elements
 * from positions 3 through 7 in reverse order to a list.
 */

#include <iostream>
#include <vector>
#include <algorithm>
#include <list>

int main() {
    std::vector<int> vec{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    std::list<int> lst;

    std::for_each(vec.crbegin() + 3, vec.crbegin()+8, [&lst](const int& i) {
        lst.push_back(i);
    });

    std::cout << "lst: " << std::endl;
    for(auto i : lst) {
        std::cout << i << " ";
    }

    return 0;
}