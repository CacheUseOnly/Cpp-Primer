/* 
 * Write a program to read a sequence of strings from the
 * standard input until either the same word occurs twice in succession or all
 * the words have been read. Use a while loop to read the text one word at a
 * time. Use the break statement to terminate the loop if a word occurs twice
 * in succession. Print the word if it occurs twice in succession, or else print a
 * message saying that no word was repeated.
 */

#include <iostream>
#include <string>

int main() {
    std::string prev = "", curr;

    while(std::cin >> curr) {
        if (curr == prev) {
            std::cout << prev << " appears twice.";
            break;
        } else {
            prev = curr;
            std::cout << "no word was repeated.\n";
        }
    };

    return 0;
}