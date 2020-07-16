/* Read a set of integers into a vector. 
 * Print the sum of each pair of adjacent elements. 
 * Change your program so that it prints the sum of the first and last elements, 
 * followed by the sum of the second and second-tolast, and so on.
 */

#include <iostream>
#include <vector>

constexpr int COUNT = 9;

using namespace std;

int main() {
    vector<int> ivec, isumVec, isumVec2;
    int buffer;

    for(int i = 0; i < COUNT; i++) {
        cout << "Please input number " << i + 1 << ": ";
        cin >> buffer;
        ivec.push_back(buffer);
    }

    for(size_t i = 1; i < ivec.size(); i++) {
        isumVec.push_back(ivec[i] + ivec[i - 1]);
    }
    cout << "Sum: ";
    for(auto i : isumVec) {
        cout << i << " ";
    }
    cout << endl;

    for(size_t i = 0, j = ivec.size() - 1; j >= i; i++, j--) {
        //buffer = ivec[i] + ivec[j];
        //cout << "i: " << i << " j: " << j << " buffer: " << buffer << endl;
        isumVec2.push_back(ivec[i] + ivec[j]);
    }
    cout << "Sum: ";
    for(auto i : isumVec2) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}