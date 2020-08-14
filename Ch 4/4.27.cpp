// What is the result of each of these expressions? 

#include <iostream>

unsigned long ul1 = 3, ul2 = 7; 
int main() {
    std::cout << (ul1 & ul2) << std::endl;
    std::cout << (ul1 | ul2) << std::endl;
    std::cout << (ul1 && ul2)<< std::endl;
    std::cout << (ul1 || ul2)<< std::endl;

    return 0; 
}