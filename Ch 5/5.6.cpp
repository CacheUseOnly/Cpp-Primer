/* Rewrite your grading program to use the conditional operator
 * (§ 4.7, p. 151) in place of the if–else statement.
 */

#include <iostream>

int main() {
    int grade;

    std::cout << "Please input numeric grade: ";
    std::cin >> grade;

    std::cout << ((grade > 90)? "A" : 
        (grade > 75)? "B" :
        (grade > 60)? "C" :
        "F");

    return 0;
}