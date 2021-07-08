/* Write a program using stream iterators to read a text file
 * into a vector of strings. 
 */

#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <iterator>

int main() {
    std::ifstream file("Cpp-Primer/Ch 10/text.txt");
    std::istream_iterator<std::string> istr_it(file), eof;
    std::vector<std::string> vec(istr_it, eof);

    std::ostream_iterator<std::string> oit(std::cout, " ");
    std::copy(vec.begin(), vec.end(), oit);
    return 0;
}