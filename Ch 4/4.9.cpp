/* Explain the behavior of the condition in the following if:
 * const char *cp = "Hello World"; if (cp && *cp)
 */
#include <iostream>

int main() {
    const char *cp = "Hello World"; 
    if (cp && *cp){
        std::cout << "true";
    }

    return 0;
}

// when cp is not nullptr and cp is not an empty string