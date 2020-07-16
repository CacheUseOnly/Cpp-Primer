/* List three ways to define a vector and give it ten elements, 
 * each with the value 42. Indicate whether there is a preferred way to do so and why.
 */

#include <vector>

int main() {
    std::vector<int> ivec1(10, 42);
    std::vector<int> ivec2 = {42, 42, 42, 42, 42, 42, 42, 42, 42, 42};
    std::vector<int> ivec3;
    for (int i = 0; i < 10; i++) {
        ivec3.push_back(42);
    }

    return 0;
}

// first one is preferred for its simplicity and easy-readness