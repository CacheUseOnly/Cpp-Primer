/**
 * Revise the bookstore program from the previous section to
 * write its output to a file. Pass the name of that file as a second argument to
 * main.
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
    std::ofstream fileToWrite;
    fileToWrite.open(argv[2]);

    Sales_data total, item;
    fileToWrite << "ISBN: ";
    file >> total.isbn;
    fileToWrite << "price: ";
    file >> total.price;
    fileToWrite << "salesAmount: ";
    file >> total.salesAmount;

    while (file >> item.isbn) {
        if (item.isbn == total.isbn) {
            fileToWrite << "salesAmount: ";
            file >> item.salesAmount;

            total.salesAmount += item.salesAmount;
        } else {
            fileToWrite << "Result for last Total: \n";
            fileToWrite << "ISBN: " << total.isbn \
                << "\ntotal revenue: " << total.salesAmount*total.price << std::endl;
        }
    }

    return 0;
}