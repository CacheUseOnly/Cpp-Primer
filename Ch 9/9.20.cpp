/**
 * Write a program to copy elements from a list<int> into
 * two deques. The even-valued elements should go into one deque and the
 * odd ones into the other.
 */

#include <list>
#include <deque>

int main() {
    std::list<int> myList = {1, 5, 7, 6, 9, 2, 4, 3, 8};
    std::deque<int> even, odd;

    for (auto it : myList) {
        if (it%2) {
            odd.push_back(it);
        } else {
            even.push_back(it);
        }
    }

    return 0;
}