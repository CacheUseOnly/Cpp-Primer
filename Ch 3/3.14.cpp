// Write a program to read a sequence of ints from cin and store those values in a vector

#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> vec;
    int buffer;

    for (int i = 0; i < 5; i++) {
        std::cout << "Please input number " << i + 1 << ": ";
        std::cin >> buffer;
        vec.push_back(buffer);
    }

    for (auto it : vec){
        std::cout << it << " ";
    }

    return 0;
}