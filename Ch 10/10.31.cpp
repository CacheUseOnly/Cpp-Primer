/**
 * Update the program from the previous exercise so that it
 * prints only the unique elements. Your program should use unqiue_copy (§
 * 10.4.1, p. 403).
 */

#include <iostream>
#include <iterator>
#include <algorithm>
#include <vector>

int main() {
    std::istream_iterator<int> in_it(std::cin), eof;
    std::vector<int> vec(in_it, eof);

    std::sort(vec.begin(), vec.end());
    std::unique_copy(vec.begin(), vec.end(), std::ostream_iterator<int>(std::cout, " "));

    return 0;
}