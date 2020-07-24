// Rewrite the programs again, this time using auto

#include <iostream>

using namespace std;

int main() {
    int ia[] = {1, 2, 3, 4, 5, 6};

    for (auto ptr : ia) {
        cout << ptr << " ";
    }
    cout << endl;

    for (auto i = 0; i < 6; ++i) {
        cout << ia[i] << " ";
    }
    cout << endl;

    for (auto ptr = ia; ptr != ia + sizeof(ia)/sizeof(ia[0]); ++ptr) {
        cout << *ptr << " ";
    }

    return 0;
}