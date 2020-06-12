/* 
 * What does the following for loop do? What is the final value of sum?
 * int sum = 0;
 * for (int i = -100; i <= 100; ++i)
 *      sum += i;
 */

// Answer: sum of integer from -100 to 100, which is 0
#include<iostream>

int main() {
    int sum = 0;
    for (int i = -100; i <= 100; ++i)
          sum += i;

    std::cout << "sum equals: " << sum << std::endl;
    return 0;
}