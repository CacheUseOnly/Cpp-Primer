/* Copy the array you defined in the previous exercise into another array. 
 * Rewrite your program to use vectors
 */

#include <iostream>
#include <vector>

int main() {
    std::vector<int> vi1, vi2;

    for (int i = 0; i < 10; ++i) {
        vi1.push_back(i);
    }

    vi2 = vi1;

    for (auto i : vi2) {
        std::cout << i << " ";
    }

    return 0;
}