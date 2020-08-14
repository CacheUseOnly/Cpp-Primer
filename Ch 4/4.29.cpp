/* Predict the output of the following code and explain your reasoning. 
 * Now run the program. Is the output what you expected? If not, figure out why.
 */

#include <iostream>

using namespace std;

int main() {
    int x[10];   
    int *p = x; 
    cout << sizeof(x)/sizeof(*x) << endl;
    cout << sizeof(p)/sizeof(*p) << endl; 

    return 0;
}

// The first is 10. It returns the number of elements in x. The second result is undefined.