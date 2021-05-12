/**
 * Write a program to process a vector<string>s whose
 * elements represent integral values. Produce the sum of all the elements in
 * that vector. Change the program so that it sums of strings that represent
 * floating-point values.
 */

#include <string>
#include <iostream>
#include <vector>

int calcSum(std::vector<std::string> vec) {
    int sum = 0;
    for (auto s : vec) {
        sum += std::stoi(s);
    }

    return sum;
}

int main() {
    std::vector<std::string> vec = {"1", "4", "5", "2", "8"};

    std::cout << calcSum(vec);
    return 0;
}