/**
 * Write a program to assign the elements from a list of
 * char* pointers to C-style character strings to a vector of strings.
 */

#include <list>
#include <vector>
#include <string>

int main() {
    std::list<char*> myList = {"Hi", "there", "why", "are", "you", "gae"};
    std::vector<std::string> myStr(myList.cbegin(), myList.cend());

    return 0;
}