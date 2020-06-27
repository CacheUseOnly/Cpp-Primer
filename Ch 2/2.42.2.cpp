// Rewrite 1.5.2

#include <iostream>
#include "Sales_data.h"

int main() {
    Sales_data previous, input;
    int count = 1;

    std::cout << "Please input ISBN: ";
    std::cin >> previous.isbn;

    do {
        std::cout << "Please input ISBN: ";
        std::cin >> input.isbn;

        if(!input.isbn.compare(previous.isbn)) {
			count ++;
		}else{
			std::cout << previous.isbn << " - " << count << std::endl;
			previous.isbn = input.isbn;
			count = 1;
		}
    } while(true);

    return 0;
}