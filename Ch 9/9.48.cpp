/**
 * Given the definitions of name and numbers on page 365,
 * what does numbers.find(name) return?
 * 
 * string numbers("0123456789"), name("r2d2");
 */

#include <string>
#include <iostream>

int main() {
    std::string numbers("0123456789"), name("r2d2"); 

    std::cout << ((numbers.find(name) == std::string::npos)? "string::npos" : "found");
    return 0;
}