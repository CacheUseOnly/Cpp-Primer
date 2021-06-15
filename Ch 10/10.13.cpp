/**
 * The library defines an algorithm named partition that
 * takes a predicate and partitions the container so that values for which the
 * predicate is true appear in the first part and those for which the predicate is
 * false appear in the second part. The algorithm returns an iterator just past
 * the last element for which the predicate returned true. Write a function that
 * takes a string and returns a bool indicating whether the string has five
 * characters or more. Use that function to partition words. Print the elements
 * that have five or more characters.
 */

#include <algorithm>
#include <iostream>
#include <vector>
#include <string>

bool predicate(const std::string &str) {
    return (str.size() >= 5);
}

int main() {
    std::vector<std::string> vec = {"strange", "awesome", "odd", "cool", "maybe", "perhaps", "value"};

    auto it = std::partition(vec.begin(), vec.end(), predicate);

    std::cout << "True part: \n";
    for (auto iter = vec.begin(); iter != it; ++iter) {
        std::cout << *iter << " ";
    }
    std::cout << "\n";

    std::cout << "False part: \n";
    for (; it != vec.end(); ++it) {
        std::cout << *it << " ";
    }
     
    return 0;
}