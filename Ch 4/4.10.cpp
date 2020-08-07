/* Write the condition for a while loop that 
 * would read ints from the standard input 
 * and stop when the value read is equal to 42.
 */

#include <iostream>

using namespace std;

int main(){
    int input;
    while (std::cin >> input && input != 42){
        /* code */
    }

    std::cout << "End";

    return 0;    
}