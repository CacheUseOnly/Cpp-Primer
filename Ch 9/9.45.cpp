/**
 * Write a funtion that takes a string representing a name
 * and two other strings representing a prefix, such as “Mr.” or “Ms.” and a
 * suffix, such as “Jr.” or “III”. Using iterators and the insert and append
 * functions, generate and return a new string with the suffix and prefix
 * added to the given name.
 */

#include <string>
#include <iostream>

std::string modStr(std::string name, std::string prefix, std::string suffix);

int main() {
    std::string name = "Ophelia";

    std::cout << modStr(name, "Ms.", "Jr.");

    return 0;
}

std::string modStr(std::string name, std::string prefix, std::string suffix) {
    auto it = name.begin();
    name.insert(it, prefix.begin(), prefix.end());
    for (;it != name.end(); ++it) {
    }
    name.append(suffix);

    return name;
}