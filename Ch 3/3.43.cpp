/* Write three different versions of a program to print the elements of ia. 
 * One version should use a range for to manage the iteration, 
 * the other two should use an ordinary for loop in one case using subscripts 
 * and in the other using pointers. In all three programs write all the types directly. 
 * That is, do not use a type alias, auto, or decltype to simplify the code
 */

#include <iostream>

using namespace std;

int main() {
    int ia[] = {1, 2, 3, 4, 5, 6};

    for (int ptr : ia) {
        cout << ptr << " ";
    }
    cout << endl;

    for (int i = 0; i < 6; ++i) {
        cout << ia[i] << " ";
    }
    cout << endl;

    for (int *ptr = ia; ptr != ia + sizeof(ia)/sizeof(ia[0]); ++ptr) {
        cout << *ptr << " ";
    }

    return 0;
}