/* The program in this section used the prefix increment and decrement operators. 
 * Explain why we used prefix and not postfix. What changes would have to be made 
 * to use the postfix versions? Rewrite the program using postfix operators. 
 */

#include <vector>

using namespace std;

int main() {
    vector<int> ivec(5,0);
    vector<int>::size_type cnt = ivec.size(); // assign values from size... 1 to the elements in ivec 
    for(vector<int>::size_type ix = 0; ix != ivec.size(); ix++, cnt--)    
        ivec[ix] = cnt;

    cnt = ivec.size();
    for(vector<int>::size_type ix = 0; ix != ivec.size(); ++ix, --cnt)    
        ivec[ix] = cnt;

    return 0;
}

/* "The prefix version avoids unnecessary work. It increments the value 
 * and returns the incremented version.The postfix operator 
 * must store the original value so that it can return the unincremented value 
 * as its result. If we don’t need the unincremented value, there’s no need 
 * for the extra work done by the postfix operator."
 */