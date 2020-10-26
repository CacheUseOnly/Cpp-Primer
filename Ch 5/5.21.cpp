/* 
 * Revise the program from the exercise in § 5.5.1 (p. 191) so
 * that it looks only for duplicated words that start with an uppercase letter.
 */

#include <iostream>
#include <string>
#include <cctype>

int main() {
    std::string prev = "", curr;

    while(std::cin >> curr) {
        if (curr == prev && isupper(curr[0])) {
            std::cout << prev << " appears twice.";
            break;
        } else {
            prev = curr;
            std::cout << "no word with uppercase was repeated.\n";
        }
    };

    return 0;
}