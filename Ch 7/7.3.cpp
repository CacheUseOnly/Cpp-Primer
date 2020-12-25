/**
 * Revise your transaction-processing program from § 7.1.1 (p.
 * 256) to use these members.
 */
#include "Sales_data.h"
#include <iostream>

int main() {
    Sales_data total, item;
    std::cout << "Please input ISBN: ";
    std::cin >> total.isbn;
    std::cout << "Please input price: ";
    std::cin >> total.price;
    std::cout << "Please input salesAmount: ";
    std::cin >> total.salesAmount;

    while (printf("Please input ISBN: ") && std::cin >> item.isbn) {
        if (item.getISBN() == total.getISBN()) {
            std::cout << "Please input salesAmount: ";
            std::cin >> item.salesAmount;

            total.combine(item);
        } else {
            std::cout << "Result for last Total: \n";
            std::cout << "ISBN: " << total.getISBN() \
                << "\ntotal revenue: " << total.salesAmount*total.price << std::endl;
        }
    }

    return 0;
}