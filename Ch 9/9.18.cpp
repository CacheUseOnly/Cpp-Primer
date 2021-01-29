/**
 * Write a program to read a sequence of strings from the
 * standard input into a deque. Use iterators to write a loop to print the
 * elements in the deque.
 */

#include <string>
#include <iostream>
#include <deque>

int main() {
    std::string buffer;
    std::deque<std::string> deq;

    for (int i = 0; i < 3; ++i) {
        std::cin >> buffer;
        deq.push_back(buffer);
    }

    for (std::deque<std::string>::const_iterator it = deq.cbegin(); it != deq.cend(); ++it) {
        std::cout << *it << std::endl;
    }

    return 0;
}