/* Using the variable definitions from this section, determine what happens in each of these assignments:
 * int i = 0, &r = i; 
 * auto a = r;  // a is an int (r is an alias for i, which has type int)
 * const int ci = i, &cr = ci; 
 * auto b = ci;  // b is an int (top-level const in ci is dropped) 
 * auto c = cr;  // c is an int (cr is an alias for ci whose const is top-level) 
 * auto d = &i;  // d is an int*(& of an int object is int*) 
 * auto e = &ci; // e is const int*(& of a const object is low-level const)
 * const auto f = ci; // deduced type of ci is int; f has type const int
 * auto &g = ci;       // g is a const int& that is bound to ci 
 * auto &h = 42;       // error: we can't bind a plain reference to a literal 
 * const auto &j = 42; // ok: we can bind a const reference to a literal
 * auto k = ci, &l = i;    // k is int; l is int& 
 * auto &m = ci, *p = &ci; // m is a const int&;p is a pointer to const int 
 * // error: type deduced from i is int; type deduced from &ci is const int 
 * auto &n = i, *p2 = &ci;
 * 
 * a = 42;   b = 42;   c = 42; d = 42;   e = 42;   g = 42;
 */

int main() {
    int i = 0, &r = i; 
    auto a = r;  // a is an int (r is an alias for i, which has type int)
    const int ci = i, &cr = ci; 
    auto b = ci;  // b is an int (top-level const in ci is dropped) 
    auto c = cr;  // c is an int (cr is an alias for ci whose const is top-level) 
    auto d = &i;  // d is an int*(& of an int object is int*) 
    auto e = &ci; // e is const int*(& of a const object is low-level const)
    const auto f = ci; // deduced type of ci is int; f has type const int
    auto &g = ci;       // g is a const int& that is bound to ci 
    auto &h = 42;       // error: we can't bind a plain reference to a literal 
    const auto &j = 42; // ok: we can bind a const reference to a literal
    auto k = ci, &l = i;    // k is int; l is int& 
    auto &m = ci, *p = &ci; // m is a const int&;p is a pointer to const int 
    // error: type deduced from i is int; type deduced from &ci is const int 
    auto &n = i, *p2 = &ci;

    a = 42;   b = 42;   c = 42; d = 42;   e = 42;   g = 42;
}