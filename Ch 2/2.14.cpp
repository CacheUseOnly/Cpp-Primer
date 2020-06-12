/* Is the following program legal? If so, what values are printed?
 * int i = 100, sum = 0; 
 * for (int i = 0; i != 10; ++i)     
 *  sum += i; 
 *  std::cout << i << " " << sum << std::endl;
 */

//100 45
#include <iostream>

int main() {
    int i = 100, sum = 0; 
    for (int i = 0; i != 10; ++i)     
        sum += i; 
        
    std::cout << i << " " << sum << std::endl;

    return 0;
}