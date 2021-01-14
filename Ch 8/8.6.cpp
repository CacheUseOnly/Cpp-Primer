/**
 * Rewrite the bookstore program from § 7.1.1 (p. 256) to read
 * its transactions from a file. Pass the name of the file as an argument to main
 * (§ 6.2.5, p. 218).
 */

#include <string>
#include <iostream>
#include <fstream>

struct Sales_data
{
    std::string isbn;
    int price;
    unsigned salesAmount;
    char month;
    char date;
};

int main(int argc, char *argv[]) {
    std::ifstream file;
    file.open(argv[1]);

    Sales_data total, item;
    std::cout << "ISBN: ";
    file >> total.isbn;
    std::cout << "price: ";
    file >> total.price;
    std::cout << "PsalesAmount: ";
    file >> total.salesAmount;

    while (file >> item.isbn) {
        if (item.isbn == total.isbn) {
            std::cout << "salesAmount: ";
            file >> item.salesAmount;

            total.salesAmount += item.salesAmount;
        } else {
            std::cout << "Result for last Total: \n";
            std::cout << "ISBN: " << total.isbn \
                << "\ntotal revenue: " << total.salesAmount*total.price << std::endl;
        }
    }

    return 0;
}