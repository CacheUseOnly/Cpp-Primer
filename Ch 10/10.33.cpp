/**
 * Write a program that takes the names of an input file and
 * two output files. The input file should hold integers. Using an
 * istream_iterator read the input file. Using ostream_iterators, write
 * the odd numbers into the first output file. Each value should be followed by a
 * space. Write the even numbers into the second file. Each of these values
 * should be placed on a separate line
 */

#include <iostream>
#include <fstream>
#include <iterator>

int main() {
    std::ifstream iFile("input.txt");
    std::ofstream odd("odd.txt");
    std::ofstream even("even.txt");
    
    std::istream_iterator<int> iInt_it(iFile), eof;
    std::ostream_iterator<int> odd_it(odd, " "), even_it(even, " ");

    while(iInt_it != eof) {
        if (*iInt_it%2 == 0) {
            *even_it++ = *iInt_it++;
        } else {
            *odd_it++ = *iInt_it++;
        }
    }

    return 0;
}