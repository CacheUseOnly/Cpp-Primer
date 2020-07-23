// What does the following program do?

#include <iostream>

using namespace std;

int main() {
    const char ca[] = {'h', 'e', 'l', 'l', 'o'}; 
    const char *cp = ca; 
    while (*cp) {    
        cout << *cp << endl;    
        ++cp; 
    } 
}

// it prints out "hello"