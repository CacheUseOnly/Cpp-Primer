/**
 * Give the second parameter of make_plural (§ 6.3.2, p.
 * 224) a default argument of 's'. Test your program by printing singular and
 * plural versions of the words success and failure.
 */
#include <iostream>
#include <string>

using std::string;

string make_plural(size_t ctr, const string &word,
    const string &ending = "s") {
    return (ctr > 1) ? word + ending : word;
}

int main() {
    std::cout << make_plural(2, "bowl");

    return 0;
}