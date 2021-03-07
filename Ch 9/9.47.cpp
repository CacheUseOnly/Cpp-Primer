/**
 * Write a program that finds each numeric character and then
 * each alphabetic character in the string "ab2c3d7R4E6". Write two
 * versions of the program. The first should use find_first_of, and the
 * second find_first_not_of.
 */

#include <string>
#include <iostream>

int main() {
    std::string nums = "0123456789";
    std::string alphabetics = "abcdefghijklmnopqrstuvwxyz";
    for (auto c : alphabetics) {
        alphabetics = alphabetics + (char)toupper(c);
    }
    std::string str = "ab2c3d7R4E6";

    auto it = 0;
    while (true) {
        it = str.find_first_of(nums, it);
        std::cout << str[it] << std::endl;
        if (it == std::string::npos) {
            break;
        }
        it++;
    }

    return 0;
}