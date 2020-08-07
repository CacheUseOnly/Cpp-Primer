// What does overflow mean? Show three expressions that will overflow.
 
// overflow is when it surpass its maximum/minimum value it can hold

#include <iostream>

int main() {
    short s = 32766;

    for (int i = 0; i < 3; ++i) {
        s++;
        std::cout << s << " ";
    }

    return 0;
}