/*  Write a program to define an array of ten ints. 
 * Give each element the same value as its position in the array
 */

#include <iostream>

int main() {
    int ia[10];

    for (size_t i = 0; i < sizeof(ia); ++i) {
        ia[i] = i;
    }

    return 0;
}