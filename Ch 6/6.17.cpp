/**
 * Write a function to determine whether a string contains
 * any capital letters. Write a function to change a string to all lowercase. Do
 * the parameters you used in these functions have the same type? If so, why?
 * If not, why not?
 */

#include <iostream>

bool containCap(const std::string &str);
void toLower(std::string &str);

int main() {
    std::string str = "Hi! Some caps and some lower";

    std::cout << "Original string: \"" << str << "\"\n";
    std::cout << (containCap(str) ? "Does " : "Doesn't ") << "contain capital letter(s)" << std::endl;
    toLower(str);
    std::cout << "To all lowercase: " << str;

    return 0;
}

bool containCap(const std::string &str) {
    for (auto c : str) {
        if (isupper(c)) {
            return true;
        }
    }
    return false;
}

void toLower(std::string &str) {
    for (auto &c : str) {
        c = tolower(c);
    }
}