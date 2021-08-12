/**
 * Using a `map` iterator write an expression that assigns a 
 * value to an element
 */

#include <map>
#include <iostream>
#include <iterator>

int main() {
    std::map<char, int> map;
    map['c'] = 3;

    auto it = map.begin();

    it->second = 5;

    return 0;
}