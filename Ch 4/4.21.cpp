/* Write a program to use a conditional operator 
 * to find the elements in a vector<int> that 
 * have odd value and double the value of each such element. 
 */

#include <iostream>
#include <vector>

int main() {
    std::vector<int> iv = {1,2,3};

    std::cout << ((iv[0]%2 == 0) ? "even" : "odd");
    std::cout << ((iv[1]%2 == 0) ? "even" : "odd");

    return 0;
}