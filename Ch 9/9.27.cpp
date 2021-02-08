/**
 * Write a program to find and remove the odd-valued
 * elements in a forward_list<int>.
 */

#include <forward_list>

int main() {
    std::forward_list<int> fwLst = {1, 4, 2, 6, 8, 5, 10, 53, 23};

    auto prev = fwLst.before_begin();
    auto curr = fwLst.begin();
    while(curr != fwLst.end()) {
        if ((*curr)%2) {
            curr = fwLst.erase_after(prev);
        } else {
            prev = curr;
            ++curr;
        }
    }

    return 0;
}