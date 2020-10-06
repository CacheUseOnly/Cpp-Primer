/* Modify our vowel-counting program so that it counts the
 * number of occurrences of the following two-character sequences: ff, fl,
 * and fi.
 */

#include <iostream>

bool isVowel(char c);
bool isSpace(char c);
bool isTab(char c);
bool isNewline(char c);

int main() {
    std::string str;
    int vowel = 0, space = 0, tab = 0, newline = 0,
        ff = 0, fl = 0, fi = 0;

    std::cout << "Please input: ";
    getline(std::cin, str);

    for (std::string::iterator it = str.begin(); it != str.end(); ++it){
        if (isVowel(*it))
            vowel++;
        else if (isSpace(*it))
            space++;
        else if (isTab(*it))
            tab++;
        else if (isNewline(*it))
            newline++;
        else if ((*it) == 'f') {
            if (*(it + 1) == 'f')
                ff++;
            else if (*(it + 1) == 'l')
                fl++;
            else if (*(it + 1) == 'i')
                fi++;
        }
    }

    std::cout << "There are " << vowel << " vowels.\n";
    std::cout << "There are " << space << " space.\n";
    std::cout << "There are " << tab << " tab.\n";
    std::cout << "There are " << newline << " newline.\n";
    std::cout << "There are " << ff << " ff.\n";
    std::cout << "There are " << fl << " fl.\n";
    std::cout << "There are " << fi << " fi.\n";
  
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

bool isSpace(char c) {
    return (c == ' ');
}

bool isTab(char c) {
    return (c == '\t');
}

bool isNewline(char c) {
    return (c == '\n');
}