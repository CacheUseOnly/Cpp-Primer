/**
 * In the final example in this section what would happen if we
 * did not assign the result of insert to begin? Write a program that omits
 * this assignment to see if your expectation was correct.
 */

// while (begin != v.end()) {
//     // do some processing
//     ++begin; // advance begin because we want to insert after this element
//     begin = v.insert(begin, 42); // insert the new value
//     ++begin; // advance begin past the element we just added
// }

#include <vector>

using namespace std;

int main() {
    std::vector<int> v;
    auto begin = v.begin();

    while (begin != v.end()) {
    // do some processing
        ++begin; // advance begin because we want to insert after this element
        v.insert(begin, 42); // insert the new value
        ++begin; // advance begin past the element we just added
    }
}