// What would happen if we did not initialize the scores array in the program on page 116

#include <iostream>

int main() {
    unsigned scores[11]; // 11 buckets, all value initialized to 0 
    unsigned grade; 
    while (std::cin >> grade) {    
        if (grade <= 100)        
            ++scores[grade/10]; // increment the counter for the current cluster 
    }

    return 0;
}

// scores is undefined: it contains random numbers