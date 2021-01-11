/**
 * Write a function that takes and returns an istream&. The
 * function should read the stream until it hits end-of-file. The function should
 * print what it reads to the standard output. Reset the stream so that it is valid
 * before returning the stream.
 */

#include <iostream>
#include <string>
#include <fstream>

std::istream& readUntilEOF(std::string name);

constexpr auto FILENAME = "8.1.txt";

int main() {
    auto& stream = readUntilEOF(FILENAME);

    // std::cout << "Stream's error bits: "
    //     << "\nEOF: " << stream.eof()
    //     << "\nFail: " << stream.fail()
    //     << "\nBad: " << stream.bad();

    return 0;
}

std::istream& readUntilEOF(std::string name) {
    std::ifstream file(name);

    if (file.good()) {
        std::string temp;
        while(1) {
            file >> temp;
            if(file.eof()) {
                std::cout << "EOF detected.";
                break;
            }
            std::cout << "Received input: " << temp << std::endl;
        }
        std::cout << "\nclearing flag(s)";
        file.clear();
        return file;
    } else {
        std::cout << "goodbit is: " << file.goodbit;
        std::cout << "\nclearing flag(s)";
        file.clear();
        return file;
    }
}