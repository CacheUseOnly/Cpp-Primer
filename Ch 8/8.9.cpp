/**
 * Use the function you wrote for the first exercise in § 8.1.2 (p.
 * 314) to print the contents of an istringstream object.
 */

#include <iostream>
#include <string>
#include <sstream>

std::istream& readUntilEOF(std::istream& file);

int main() {
    std::istringstream ss("blah \n fjdask jk");

    auto& res = readUntilEOF(ss);
    
    return 0;
}

std::istream& readUntilEOF(std::istream& file) {

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