/* In the following code, determine the type of each variable 
 * and the value each variable has when the code finishes: 
 * int a = 3, b = 4; 
 * decltype(a) c = a; 
 * decltype((b)) d = a; 
 * ++c; 
 * ++d; 
 */

//c: int, 4; d: int, 4

int main() {
    int a = 3, b = 4; 
    decltype(a) c = a; 
    decltype((b)) d = a; 
    ++c; 
    ++d; 
}

//d: int&