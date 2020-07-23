/* Write a program to compare two strings. 
 * Now write a program to compare the values of two C-style character strings.
 */

#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int strCompare(string str1, string str2);
int cStrCompare(char *str1, char *str2);

int main() {
    string str1 = "hello", str2 = "hello";
    char cstr1[] = "hello", cstr2[] = "hi";

    switch (strCompare(str1, str2))
    {
    case -1:
        cout << "String 1 is larger than string 2.\n";
        break;
    case 0:
        cout << "They are the same.\n";
        break;
    case 1:
        cout << "String 2 is larger than string 1.\n";
        break;
    default:
        break;
    }

    switch (cStrCompare(cstr1, cstr2))
    {
    case -1:
        cout << "C String 1 is larger than C string 2.\n";
        break;
    case 0:
        cout << "They are the same.\n";
        break;
    case 1:
        cout << "C String 2 is larger than C string 1.\n";
        break;
    default:
        break;
    }

    return 0;
}

int strCompare(string str1, string str2) {
    if (str1 > str2) {
        return -1;
    } else if (str1 == str2) {
        return 0;
    } else {
        return 1;
    }
}

int cStrCompare(char *str1, char *str2) {
    if (strcmp(str1, str2) < 0) {
        return -1;
    } else if (strcmp(str1, str2) == 0) {
        return 0;
    } else {
        return 1;
    }
}
