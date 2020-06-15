/* Determine the types deduced in each of the following definitions. 
 * Once you’ve figured out the types, write a program to see whether you were correct.
 * const int i = 42; 
 * auto j = i; const auto &k = i; auto *p = &i; 
 * const auto j2 = i, &k2 = i;
 */

// j: int; k: cosnt int&; p: int*;
// j2: const int; k2: const int&

const int i = 42; 
auto j = i; const auto &k = i; auto *p = &i; 
const auto j2 = i, &k2 = i;

//p: const int*