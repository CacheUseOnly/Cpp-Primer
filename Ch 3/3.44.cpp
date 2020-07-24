/* Rewrite the programs from the previous exercises 
 * using a type alias for the type of the loop control variables
 */
#include <iostream>

using namespace std;
using ptrToArr = int*;

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

    for (ptrToArr ptr = ia; ptr != ia + sizeof(ia)/sizeof(ia[0]); ++ptr) {
        cout << *ptr << " ";
    }

    return 0;
}