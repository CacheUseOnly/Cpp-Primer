/**
 * Use stream iterators, sort, and copy to read a sequence
 * of integers from the standard input, sort them, and then write them back to
 * the standard output.
 */

#include <iostream>
#include <iterator>
#include <algorithm>
#include <vector>

int main() {
    std::istream_iterator<int> in_it(std::cin), eof;
    std::vector<int> vec(in_it, eof);

    std::sort(vec.begin(), vec.end());
    std::copy(vec.begin(), vec.end(), std::ostream_iterator<int>(std::cout, " "));

    return 0;
}