/**
 * Using the following definition of ia, copy ia into a vector
 * and into a list. Use the single-iterator form of erase to remove the
 * elements with odd values from your list and the even values from your
 * vector.
 * 
 * int ia[] = { 0, 1, 1, 2, 3, 5, 8, 13, 21, 55, 89 };
 */

#include <vector>
#include <list>

int main() {
    int ia[] = { 0, 1, 1, 2, 3, 5, 8, 13, 21, 55, 89 };
    std::vector<int> vec;
    std::list<int> lst;

    for (int i = 0; i < 11; ++i) {
        vec.push_back(ia[i]);
        lst.push_back(ia[i]);
    }

    for (auto it = lst.cbegin(); it != lst.cend();) {
        if ((*it)%2 != 0) {
            it = lst.erase(it);
        } else {
            ++it;
        }
    }
    for (auto it = vec.cbegin(); it != vec.cend();) {
        if ((*it)%2 == 0) {
            it = vec.erase(it);
        } else {
            ++it;
        }
    }

    return 0;
}