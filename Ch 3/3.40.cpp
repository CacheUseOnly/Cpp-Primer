/* Write a program to define two character arrays initialized from string literals. 
 * Now define a third character array to hold the concatenation of the two arrays. 
 * Use strcpy and strcat to copy the two arrays into the third.
 */

#include <iostream>
#include <cstring>

using namespace std;

int main() {
    char cstr1[] = "hello,", cstr2[] = " world!";
    char catStr[13];

    strcpy(catStr, cstr1);
    strcat(catStr, cstr2);

    for (auto ptr = catStr; ptr != catStr + sizeof(catStr); ++ptr) {
        cout << *ptr;
    }

    return 0;
}