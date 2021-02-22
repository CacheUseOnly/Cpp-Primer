/**
 * Write a program that initializes a string from a
 * vector<char>.
 */

#include <vector>
#include <string>

std::vector<char> vc;

int main() {
    for (auto c : "hello warudo") {
        vc.push_back(c);
    }

    std::string str(vc.begin(), vc.end());

    return 0;
}