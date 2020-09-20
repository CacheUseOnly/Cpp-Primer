/* Using an if–else statement, write your own version of the
 * program to generate the letter grade from a numeric grade
 */

#include <iostream>

int main() {
    int grade;

    std::cout << "Please input numeric grade: ";
    std::cin >> grade;

    if (grade > 100 || grade < 0) {
        std::cout << "Invalide grade.";
    } else if (grade > 90) {
        std::cout << "A";
    } else if (grade > 75) {
        std::cout << "B";
    } else if (grade > 60) {
        std::cout << "c";
    } else {
        std::cout << "F";
    }

    return 0;
}