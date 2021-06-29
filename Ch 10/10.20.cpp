/**
 * The libraray defines an algorithm named `count_if`
 * Like `find_if`, this function takes a pair of iterators
 * denoting an input range and a predicate that it applies
 * to each element in the given range. `count_if` returns a
 * count of how often the predicate is true. Use `count_if` to
 * rewrite the portion of our program that counted how many words
 * are greater then length 6
 */

#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

int main() {
    std::vector<std::string> vec 
        {"example", "longer", "strings", "decrement", "algorithm", "allocator", "mob", "mod", "cool"};

    std::cout << "words longer than 6: " <<
        std::count_if(vec.begin(), vec.end(), [](std::string& str) -> bool {
            return (str.size() > 6);
        })
        << std::endl;

    return 0;
}