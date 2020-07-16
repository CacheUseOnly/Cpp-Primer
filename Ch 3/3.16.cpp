/* Write a program to print the size and contents of the vectors from exercise 3.13. 
 * Check whether your answers to that exercise were correct. 
 * If not, restudy § 3.3.1 (p. 97) until you understand why you were wrong. 
 */

#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> v1;                 // empty
    vector<int> v2(10);             // ten uninitialized int
    vector<int> v3(10, 42);         // ten '42'
    vector<int> v4{10};             // '10'
    vector<int> v5{10, 42};         // '10', '42'
    vector<string> v6{10};          // ten uninitialized string
    vector<string> v7{10, "hi"};    // ten "hi" strings

    std::cout << "Size of v1: " << v1.size() << std::endl;
    for (auto i : v1) {
        std::cout << i << ", ";
    }
    std::cout << "\nSize of v2: " << v2.size() << std::endl;
    for (auto i : v2) {
        std::cout << i << ", ";
    }
    std::cout << "\nSize of v3: " << v3.size() << std::endl;
    for (auto i : v3) {
        std::cout << i << ", ";
    }
    std::cout << "\nSize of v4: " << v4.size() << std::endl;
    for (auto i : v4) {
        std::cout << i << ", ";
    }
    std::cout << "\nSize of v5: " << v5.size() << std::endl;
    for (auto i : v5) {
        std::cout << i << ", ";
    }
    std::cout << "\nSize of v6: " << v6.size() << std::endl;
    for (auto i : v6) {
        std::cout << i << ", ";
    }
    std::cout << "\nSize of v7: " << v7.size() << std::endl;
    for (auto i : v7) {
        std::cout << i << ", ";
    }

    return 0;
}
