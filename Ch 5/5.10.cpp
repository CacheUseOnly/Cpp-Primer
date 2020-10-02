/* There is one problem with our vowel-counting program as
 * we’ve implemented it: It doesn’t count capital letters as vowels. Write a
 * program that counts both lower- and uppercase letters as the appropriate
 * vowel—that is, your program should count both 'a' and 'A' as part of
 * aCnt, and so forth.
 */
#include <iostream>

bool isVowel(char c);

int main() {
    std::string str;
    int aCnt = 0;

    std::cout << "Please input: ";
    std::cin >> str;

    for (char c : str){

        if (isVowel(c))
            aCnt++;
    }

    std::cout << "There are " << aCnt << " vowels.\n";

    return 0;
}

bool isVowel(char c) {
    if (c == 'a' || c == 'A')
        return true;
    else if (c == 'e'|| c == 'E') 
        return true;
    else if (c == 'i'|| c == 'I')
        return true;
    else if (c == 'o'|| c == 'O')
        return true;
    else if (c == 'u'|| c == 'U')
        return true;
    else 
        return false;
}