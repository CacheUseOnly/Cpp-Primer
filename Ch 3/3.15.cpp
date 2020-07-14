// Repeat the previous program but read strings this time.

#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<string> vec;
    string buffer;

    for (int i = 0; i < 5; i++) {
        std::cout << "Please input string " << i + 1 << ": ";
        std::cin >> buffer;
        vec.push_back(buffer);
    }

    for (auto it : vec){
        std::cout << it << " ";
    }

    return 0;
}