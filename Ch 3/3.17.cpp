/* Read a sequence of words from cin and store the values a vector. 
 * After you’ve read all the words, process the vector and change each word to uppercase. 
 * Print the transformed elements, eight words to a line. 
 */

#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<string> vec;
    string buffer;

    for (int i = 0; i < 17; i++) {
        std::cout << "Please input words: ";
        getline(cin, buffer);
        vec.push_back(buffer);
    }

    for (auto& ele : vec) {
        for (auto& c : ele) {
            c = toupper(c);
        }
    }

    for (vector<string>::size_type i = 0; i < vec.size(); i++) {
        cout << vec[i] << " ";
        if ((i + 1)%8 == 0) {
            cout << endl;
        }
    }

    return 0;
}