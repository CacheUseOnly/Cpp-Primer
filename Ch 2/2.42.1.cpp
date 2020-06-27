/* Write your own version of the Sales_data.h header 
 * and use it to rewrite the exercise from § 2.6.2 (p. 76).
 */

// Rewrite exercise 1.21

#include <iostream>
#include "Sales_data.h"

int main() {
    Sales_data item1, item2;

    std::cout << "Please input the data of the first item (ISBN, price, sales amount): ";
    std::cin >> item1.isbn >> item1.price >> item1.salesAmount;
    std::cout << "Please input the data of the second item (ISBN, price, sales amount): ";
    std::cin >> item2.isbn >> item2.price >> item2.salesAmount;

    if (!item1.isbn.compare(item2.isbn)) {
        std::cout << "Total sale is: " << item1.price*item1.salesAmount + item2.price*item2.salesAmount << std::endl;
        return 0;
    } else {
        std::cout << "ISBN are not the same." << std::endl;
        return 1;
    }
}