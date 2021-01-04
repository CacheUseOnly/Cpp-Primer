/**
 * We might want to supply cin as a default argument to the
 * constructor that takes an istream&. Write the constructor declaration that
 * uses cin as a default argument.
 */

#include <iostream>

class foo {
public:
    foo(std::istream& in = std::cin);
private:
    int i;
};