/* How many elements are there in each of the following vectors? 
 * What are the values of the elements?
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
 
    return 0;
}
