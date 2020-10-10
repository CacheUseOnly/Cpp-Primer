/* Write a program to read strings from standard input
 * looking for duplicated words. The program should find places in the input
 * where one word is followed immediately by itself. Keep track of the largest
 * number of times a single repetition occurs and which word is repeated. Print
 * the maximum number of duplicates, or else print a message saying that no
 * word was repeated. For example, if the input is
 
 * how now now now brown cow cow
 
 * the output should indicate that the word now occurred three times.
 */

#include <iostream>
#include <vector>

int main() {
    int currRep = 0;            // time repeated
    std::string currRepStr("");     // string that is repeating currently
    int longestRep = 0;         // time of longest repeatition
    std::string longestRepStr("");
    std::string buffer("");

    // std::cin >> buffer;
    // currRepStr = buffer;

    do{

        if (buffer == currRepStr) {
            currRep++;
            if (currRep > longestRep){
                longestRep = currRep;
                longestRepStr = currRepStr;
            }
        } else {
            currRepStr = buffer;
            currRep = 0;
        }
        // std::cin >> buffer;
    } while (std::cin >> buffer);
    
    if (longestRepStr.empty()) {
        std::cout << "There is no repeatition\n";
    } else {
        std::cout << longestRepStr << " loop(s) for " << longestRep <<" times.\n";
    }

    return 0;
}