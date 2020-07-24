// Write a program to initialize a vector from an array of ints

#include <vector>

using namespace std;

int main() {
    int arr[] = {1,2,3,4,5,6};
    vector<int> ivec;

    for(auto ptr = arr; ptr != arr + sizeof(arr)/sizeof(arr[0]); ++ptr) {
        ivec.push_back(*ptr);
    }

    return 0;
}