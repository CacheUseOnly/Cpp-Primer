/* Write a program to create a vector with ten int elements. 
 * Using an iterator, assign each element a value that is twice its current value. 
 * Test your program by printing the vector.
 */

#include <iostream>
#include <vector>
#include <time.h>

int main() {
    srand(time(NULL));
    int buffer;

    std::vector<int> ivec;
    for (int i = 0; i < 10; i++) {
        buffer = (random() % 101);
        ivec.push_back(buffer);
        std::cout << buffer << " ";
    }

    std::cout << std::endl;

    for (auto it = ivec.begin(); it != ivec.end(); it++) {
        *it = *it * 2;
        std::cout << *it << " ";
    }

    return 0;    
}