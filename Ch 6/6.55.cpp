/**
 * Write four functions that add, subtract, multiply, and divide
 * two int values. Store pointers to these values in your vector from the
 * previous exercise
 */
#include <vector>

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

    return 0;
}