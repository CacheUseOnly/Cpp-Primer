/**
 * Write a version of the transaction-processing program from §
 * 1.6 (p. 24) using the Sales_data class you defined for the exercises in §
 * 2.6.1 (p. 72).
 */
#include <string>
#include <iostream>

struct Sales_data
{
    std::string isbn;
    int price;
    unsigned salesAmount;
    char month;
    char date;
};

int main() {
    Sales_data total, item;
    std::cout << "Please input ISBN: ";
    std::cin >> total.isbn;
    std::cout << "Please input price: ";
    std::cin >> total.price;
    std::cout << "Please input salesAmount: ";
    std::cin >> total.salesAmount;

    while (printf("Please input ISBN: ") && std::cin >> item.isbn) {
        if (item.isbn == total.isbn) {
            std::cout << "Please input salesAmount: ";
            std::cin >> item.salesAmount;

            total.salesAmount += item.salesAmount;
        } else {
            std::cout << "Result for last Total: \n";
            std::cout << "ISBN: " << total.isbn \
                << "\ntotal revenue: " << total.salesAmount*total.price << std::endl;
        }
    }

    return 0;
}