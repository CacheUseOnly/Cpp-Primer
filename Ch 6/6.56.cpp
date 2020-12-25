// Call each element in the vector and print their result.

#include <vector>
#include <iostream>

int add(int varA, int varB);
int subtract(int varA, int varB);
int multiply(int varA, int varB);
int divide(int dividend, int divider);

using F = decltype(add);
using PF = int(*)(int, int);

int main() {
    std::vector<F(*)> vec;
    std::vector<PF> vec2;   // equivalent

    vec.push_back(add);
    vec.push_back(subtract);
    vec.push_back(multiply);
    vec.push_back(divide);

    for(auto op : vec) {
        std::cout << op(14, 7) << std::endl;
    }

    return 0;
}

int add(int varA, int varB) {
    return varA + varB;
}

int subtract(int varA, int varB) {
    return varA - varB;
}

int multiply(int varA, int varB) {
    return varA * varB;
}

int divide(int dividend, int divider) {
    return dividend/divider;
}