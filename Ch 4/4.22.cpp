/* Extend the program that assigned high pass, pass, and fail grades 
 * to also assign low pass for grades between 60 and 75 inclusive. 
 * Write two versions: One version that uses only conditional operators; 
 * the other should use one or more if statements. 
 * Which version do you think is easier to understand and why? 
 */
#include <string>

int main() {
    std::string finalgrade;
    int grade = 89;
    finalgrade = (grade > 90) ? "high pass"                          
        : (grade < 75 && grade > 60) ? "low pass" 
        : (grade < 60) ? "fail" : "pass";

    if (grade > 90) {
        finalgrade = "high pass";
    } else if (grade > 75) {
        finalgrade = "pass";
    } else if (grade > 60) {
        finalgrade = "low pass";
    } else {
        finalgrade = "fail";
    }

    return 0;
}

// second one