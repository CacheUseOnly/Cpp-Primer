/* Is the following range for legal? If so, what is the type of c?
 * const string s = "Keep out!"; for (auto &c : s) { /* ...  * / }
 */
#include <iostream>

int main() {
    const std::string s = "Keep out!"; 
    for (auto &c : s) { 
        /* ...  */ 
    }
}

//legal. it's const char&