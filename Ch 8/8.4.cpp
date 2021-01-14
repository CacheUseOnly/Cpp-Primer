/**
 * Write a function to open a file for input and read its contents
 * into a vector of strings, storing each line as a separate element in the
 * vector.
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
    std::vector<std::string> strVec;
    std::string temp;

    if(file) {
        while(std::getline(file, temp)) {
            strVec.push_back(temp);
        }
    } else {
        std::cerr << "Error opening the file.";
    }

    return strVec;
}