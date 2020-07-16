/* Is the following program legal? If not, how might you fix it? 
 * vector<int> ivec; ivec[0] = 42;
 */

#include <iostream>
#include <vector>

int main() {
    std::vector<int> ivec; 
    ivec[0] = 42;

    return 0;
}

// illegal, segmentation fault
// fix: 
//      std::vector<int> ivec;
//      ivec.push_back(42);