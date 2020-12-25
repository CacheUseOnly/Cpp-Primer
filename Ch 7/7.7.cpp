/**
 * Rewrite the transaction-processing program you wrote for the
 * exercises in § 7.1.2 (p. 260) to use these new functions.
 */

#include "Sales_data.h"

int main() {
    Sales_data total;
    if (read(std::cin, total)) {
        Sales_data item;
        while (read(std::cin, item)) {
            if (item.getISBN() == total.getISBN()) {
                total.combine(item);
            } else {
                print(std::cout, total);
                total = item;
            }
        }
    } else {
        std::cerr << "std::cin malfunctions.";
    }

    return 0;
}