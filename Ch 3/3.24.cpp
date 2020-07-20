// Redo the last exercise from § 3.3.3 (p. 105) using iterators

#include <iostream>
#include <vector>

using namespace std;

constexpr int COUNT = 9;

int main() {
    vector<int> ivec, isumVec, isumVec2;
    int buffer;

    for(int i = 0; i < COUNT; i++) {
        cout << "Please input number " << i + 1 << ": ";
        cin >> buffer;
        ivec.push_back(buffer);
    }

    for(vector<int>::iterator it = ivec.begin(); it != ivec.end(); it++) {
        isumVec.push_back((*it) + (*next(it, 1)));
    }
    cout << "Sum: ";
    for(vector<int>::iterator it = isumVec.begin(); it != isumVec.end(); it++) {
        cout << (*it) << " ";
    }
    cout << endl;

    for(vector<int>::iterator i = ivec.begin(), j = ivec.end() - 1; j >= i; i++, j--) {
        //buffer = ivec[i] + ivec[j];
        //cout << "i: " << i << " j: " << j << " buffer: " << buffer << endl;
        isumVec2.push_back((*i) + (*j));
    }
    cout << "Sum: ";
    for(vector<int>::iterator it = isumVec2.begin(); it != isumVec2.end(); it++) {
        cout << (*it) << " ";
    }
    cout << endl;

    return 0;
}