/* What would happen if the while loop on page 148 
 * that prints the elements from a vector used the prefix increment operator? 
 */
#include <iostream>
#include <vector>

int main() {
    std::vector<int> v;
    auto pbeg = v.begin(); 
    // print elements up to the first negative value 
    while (pbeg != v.end() && *beg >= 0)    
        std::cout << ++*pbeg << std::endl; // print the current value and advance pbeg

    return 0;
}

// print 2nd to end element