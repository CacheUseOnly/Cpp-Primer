/**
 * How would you initialize a vector<double> from a
 * list<int>? From a vector<int>? Write code to check your answers.
 */

#include <vector>
#include <list>

int main() {
    std::list<int> myList = {1, 3, 5, 7, 89};
    std::vector<int> iVec(8, 3);

    std::vector<double> dVec(myList.begin(), myList.end());
    std::vector<double> dVec2(iVec.cbegin(), iVec.cend());

    return 0;
}