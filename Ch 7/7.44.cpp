/**
 * Is the following declaration legal? If not, why not?
 * vector<NoDefault> vec(10);
 */

// Illegal, no default constructor

#include <vector>
#include "7.43.h"

using std::vector;

int main() {
    vector<NoDefault> vec(10);
}