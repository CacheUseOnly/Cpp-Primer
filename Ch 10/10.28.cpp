/**
 * Copy a vector that holds the values from 1 to 9 inclusive,
 * into three other containers. Use an inserter, a back_inserter, and a
 * front_inserter, respectivly to add elements to these containers. Predict
 * how the output sequence varies by the kind of inserter and verify your
 * predictions by running your programs.
 */

#include <iostream>
#include <vector>
#include <list>

int main() {
    std::vector<int> origin{1, 2, 3, 4, 5, 6, 7, 8, 9};
    std::list<int> vec1, vec2, vec3;

    std::copy(origin.begin(), origin.end(), std::inserter(vec1, vec1.begin()));
    std::copy(origin.begin(), origin.end(), std::back_inserter(vec2));
    std::copy(origin.begin(), origin.end(), std::front_inserter(vec3));

    for (auto i : vec1) std::cout << i << " ";
    std::cout << std::endl;
    for (auto i : vec2) std::cout << i << " ";
    std::cout << std::endl;
    for (auto i : vec3) std::cout << i << " ";
    std::cout << std::endl;

    return 0;
}