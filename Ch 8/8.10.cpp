/**
 * Write a program to store each line from a file in a
 * vector<string>. Now use an istringstream to read each element from
 * the vector a word at a time.
 */

#include <vector>
#include <string>
#include <iostream>
#include <fstream>
#include <sstream>

int main() {
    std::ifstream file("8.1.txt");
    std::vector<std::string> vec;
    std::string temp;

    while(std::getline(file, temp)) {
        vec.push_back(temp);
        std::istringstream iss(temp);
        std::string out;
        while(iss >> out) {
            std::cout <<  out << std::endl;
        }
    }

    return 0;
}