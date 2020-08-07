/* Write an expression that tests four values, 
 * a, b, c, and d, and ensures that a is greater than b, 
 * which is greater than c, which is greater than d
 */
#include <iostream>

int main() {
    int a = 4, b = 3, c = 3, d = 1;
    if (a>b && b>c && c>d){
        std::cout << "true";
    } else {
        std::cout << "false";
    }

    return 0;
}