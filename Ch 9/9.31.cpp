/**
 * The program on page 354 to remove even-valued elements
 * and duplicate odd ones will not work on a list or forward_list. Why?
 * Revise the program so that it works on these types as well.
 */

// Because there is no `insert()` member for forward_list

#include <vector>
#include <forward_list>

using namespace std;

int main() {
    // silly loop to remove even-valued elements and insert a duplicate of odd-valued elements
    forward_list<int> vi = {0,1,2,3,4,5,6,7,8,9};

    auto prev = vi.before_begin();
    auto iter = vi.begin();                             // call begin, not cbegin because we're changing vi
    while (iter != vi.end()) {
        if (*iter % 2) {
            iter = vi.insert_after(prev, *iter);        // duplicate the current element
            advance(iter, 2);
            advance(prev, 2);                           // advance past this element and the one inserted before it
        } else
            iter = vi.erase_after(prev);                // remove even elements
        // don't advance the iterator; iter denotes the element after the one we erased
    }

    return 0;
}