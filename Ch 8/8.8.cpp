/**
 * Revise the program from the previous exercise to append its
 * output to its given file. Run the program on the same output file at least
 * twice to ensure that the data are preserved.
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
    fileToWrite.open(argv[2],std::ofstream::app);

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