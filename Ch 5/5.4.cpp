// Explain each of the following examples, and correct any problems you detect. 
#include <string>
#include <vector>

int main() {
    std::string s;
    // (a) while (std::string::iterator iter != s.end()) { /* . . . */ } 
    std::string::iterator iter = s.begin();
    while (iter != s.end()) {}

    // (b) while (bool status = find(word)) { /* . . . */ } if (!status) { /* . . . */ }
    bool status;
    while (status = find(word)){}
    if (!status){}
}