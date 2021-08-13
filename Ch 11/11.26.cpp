/**
 * What type can be used to subscript a `map`? What type does
 * the subscript operator return? Give a concrete example—that is, define a map
 * and then write the types that can be used to subscript the map and the type
 * that would be returned from the subscript operator.
 */

#include <iostream>
#include <map>
#include <string>

int main()
{
    std::map<int, std::string> m = { { 1,"ss" },{ 2,"sz" } };
    using KeyType = std::map<int, std::string>::key_type;

    std::cout << "type to subscript: " << typeid(KeyType).name() << std::endl;
    std::cout << "returned from the subscript operator: " << typeid(decltype(m[1])).name() << std::endl;

    return 0;
}