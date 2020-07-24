// Write a program to copy a vector of ints into an array of ints.

#include <vector>

using namespace std;

int main() {
    vector<int> ivec(5,2);
    int iarr[5];

    for(int i = 0; i < 5; ++i) {
        iarr[i] = ivec[i];
    }

    return 0;
}