/**
 * Redefine `bookstore` without using `decltype`
 */

#include <set>
#include "../Sales_item.h"

int main() {
    using less = bool(*)(const Sales_item&, const Sales_item&);
    std::multiset<Sales_item, less> m_set;

    return 0;
}