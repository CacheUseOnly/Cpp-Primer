/* Revise the loop that printed the first paragraph in text 
 * to instead change the elements in text that 
 * correspond to the first paragraph to all uppercase. 
 * After you’ve updated text, print its contents.
 */

#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<string> svec;

    for (string line; getline(cin, line); svec.push_back(line));

    for (auto& word : svec) {
        for (auto& c : word) {
            c = toupper(c);
        }
    }

    for (auto str : svec) {
        cout << str;
    }

    return 0;
}