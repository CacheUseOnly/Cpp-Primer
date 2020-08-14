/* In our grading example in this section, 
 * what would happen if we used unsigned int as the type for quiz1? 
 */

int main() {
    unsigned int quiz1;
    quiz1 |= 1UL << 27;

}
// overflow with the final value 134217728