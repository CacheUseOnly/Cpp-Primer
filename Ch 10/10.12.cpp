/**
 * Write a function named compareIsbn that compares the
 * isbn() members of two Sales_data objects. Use that function to sort a
 * vector that holds Sales_data objects. 
 */

#include <iostream>
#include <string>

class Sales_data {
private:
    std::string ISBN;
    std::string name;

public:
    Sales_data(std::string isbn, std::string bookName) {
        ISBN = isbn;
        name = bookName;
    }
    Sales_data (): ISBN(""), name("placeholder") {}

    std::string getISBN() const {
        return ISBN;
    }

    std::string getName() const {
        return name;
    }
};

bool compareIsbn(const Sales_data &data1, const Sales_data &data2) {
    return data1.getISBN() > data2.getISBN();
}

int main() {
    Sales_data data1("123456", "book1");
    Sales_data data2("2345678", "book2");

    std::cout << "book1 > book2: " << (compareIsbn(data1, data2)? "true" : "false") << std::endl;

    return 0;
}