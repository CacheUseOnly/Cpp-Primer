/* The following expression fails to compile due to operator precedence. 
 * Using Table 4.12 (p. 166), explain why it fails. How would you fix it?
 */
#include <string>

std::string s = "word"; 
std::string pl = s + s[s.size() - 1] == 's' ? "" : "s" ; 
// the expression is evaluated in (s + s[s.size() - 1]) == 's' ? "" : "s"
std::string pl = s + ((s[s.size() - 1] == 's') ? "" : "s") ; 