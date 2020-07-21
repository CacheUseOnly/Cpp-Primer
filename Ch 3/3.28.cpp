// What are the values in the following arrays?

#include <iostream>
#include <string>

using namespace std;

string sa[10];
int ia[10];
int main() {    
    string sa2[10];    
    int    ia2[10]; 

    cout << "--output--\n";
    for (int i = 0; i < 10; i++){
        cout << i << ": " << ia2[i] << " ";
    }

    return 0;
}

// sa2 is all ""