// Indicate which, if any, of the following output statements are legal
// std::cout << "/*"; std::cout << "*/";
// std::cout << /* "*/" */;
// std::cout << /*  "*/" /* "/*"  */;
// After you’ve predicted what will happen, test your answers by compiling a program with each of these statements.
// Correct any errors you encounter.

// Prediction:
// what the compiler will receive is: 
// std::cout << "/*"; std::cout << "*/";
// std::cout << " */;
// std::cout << " /* ";
// Thus it gives error on the second line
#include<iostream>

int main() {
    std::cout << "/*"; std::cout << "*/";
    std::cout << /* "*/" */;
    std::cout << /*  "*/" /* "/*"  */;

    return 0;
}