/**
 * Rewrite the previous program to store each word in a
 * separate element.
 */

#include <fstream>
#include <vector>
#include <iostream>
#include <string>

std::vector<std::string> &readIntoVec(const std::string& fileName);

int main() {
    std::vector<std::string> vec;
    vec = readIntoVec("8.1.txt");
    return 0;
}

std::vector<std::string> &readIntoVec(const std::string& fileName) {
    std::ifstream file;
    file.open(fileName);
    std::vector<std::string> vec;
    std::string temp;

    if(file) {
        while(file >> temp) {
            vec.push_back(temp);
        }
    } else {
        std::cerr << "Error opening the file.";
    }

    return vec;
}