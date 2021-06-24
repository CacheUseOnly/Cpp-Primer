/**
 * Rewrite exercise 10.12 from 10.3.1(p. 387) to use a lambda
 * in the call to sort instead of the compareIsbn function.
 */

#include <string>
#include <iostream>
#include <vector>
#include <algorithm>

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

int main() {
    Sales_data data1("123456", "book1");
    Sales_data data2("8345678", "book2");
    Sales_data data3("2345978", "book3");
    Sales_data data4("1345678", "book4");

    std::vector<Sales_data> vec {data1, data2, data3, data4};
    std::sort(vec.begin(), vec.end(), [](const Sales_data& data1, const Sales_data& data2) {
        return data1.getISBN() > data2.getISBN();
    });

    std::for_each(vec.begin(), vec.end(), [](const Sales_data& data) {
        std::cout << data.getName() << " ";
    });
    
    return 0;
}