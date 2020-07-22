/* Write a program to compare two arrays for equality. 
 * Write a similar program to compare two vectors
 */

#include <iostream>
#include <vector>

using namespace std;

bool compare(int* ia1, int* ia2);
bool compare(vector<int> iv1, vector<int> iv2);

int main() {
    int ia1[5] = {2,2,2,2,2}, ia2[5] = {3,3,3,3,3};
    vector<int> iv1(5,2), iv2(5,2);

    cout << "array 1 and array 2 are " << (compare(ia1, ia2) ? "the same" : "not the same") << endl;
    cout << "vector 1 and vector 2 are " << (compare(iv1, iv2) ? "the same" : "not the same") << endl;

    return 0;
}

bool compare(int* ia1, int* ia2) {
    for (auto pt1 = ia1, pt2 = ia2; pt1 != ia1 + sizeof(ia1), pt2 != ia2 + sizeof(ia2); ++pt1, ++pt2) {
        if ((*pt1) != ((*pt2))) {
            return false;
        }
    }
    
    return true;
}
bool compare(vector<int> iv1, vector<int> iv2) {
    for (auto it1 = iv1.begin(), it2 = iv2.begin(); it1 != iv1.end(), it2 != iv2.end(); ++it1, ++it2) {
        if ((*it1) != (*it2)) {
            return false;
        }
    }

    return true;
}
