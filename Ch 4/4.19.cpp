/* Given that ptr points to an int, that vec is a vector<int>, 
 * and that ival is an int, explain the behavior of each of these expressions. 
 * Which, if any, are likely to be incorrect? Why? How might each be corrected? 
 */

#include <vector>

int main() {
    int* ptr;
    std::vector<int> vec;
    int ival;

    ptr != 0 && *ptr++;         
    /* ptr is not nullptr and its value add 1
     * likely to be incorrect, should be
     * *ptr != 0 && ptr++
     */

    ival++ && ival;
    /* ival != -1 && ival != 0 */

    vec[ival++] <= vec[ival];
    /* next element in vec is less than current element */
}