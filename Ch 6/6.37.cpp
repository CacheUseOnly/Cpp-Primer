/**
 * Write three additional declarations for the function in the
 * previous exercise. One should use a type alias, one should use a trailing
 * return, and the third should use decltype. Which form do you prefer and
 * why?
 */

#include <string>

using refStrArr = std::string[];
refStrArr& func_one();

auto func_two()->std::string(&)[10];

std::string arr[10];
decltype(*arr) &func_three();