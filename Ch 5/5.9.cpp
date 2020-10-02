// Write a program using a series of if statements to count the
// number of vowels in text read from cin.

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
    if (c == 'a')
        return true;
    else if (c == 'e') 
        return true;
    else if (c == 'i')
        return true;
    else if (c == 'o')
        return true;
    else if (c == 'u')
        return true;
    else 
        return false;
}