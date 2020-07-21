/* Identify the indexing errors in the following code:*/

#include <iostream>


using namespace std;

constexpr size_t array_size = 10; 
int main () {
    int ia[array_size]; 
    for (size_t ix = 1; ix <= /* should be ',' */ array_size; ++ix)      
        ia[ix] = ix;

    return 0;
}

//*** stack smashing detected ***: <unknown> terminated