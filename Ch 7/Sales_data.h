#include <string>
#include <iostream>

class Sales_data
{
public:
    Sales_data();
    Sales_data(std::string ISBN);
    Sales_data(std::istream &is);
    std::string isbn;
    int price;
    unsigned salesAmount;
    char month;
    char date;

    std::string getISBN();
    Sales_data& combine(Sales_data item);
};

Sales_data::Sales_data(): isbn(""), price(0), salesAmount(0){    
}

Sales_data::Sales_data(std::string ISBN) {
    isbn = ISBN;
}

Sales_data::Sales_data(std::istream &is) {
    read(is, *this);
}

Sales_data& Sales_data::combine(Sales_data item) {
    salesAmount += item.salesAmount;
    return *this;
}

std::string Sales_data::getISBN() {
    return isbn;
}

Sales_data& add(Sales_data item1, Sales_data item2) {
    item1.salesAmount += item2.salesAmount;
    return item1;
}

std::istream& read(std::istream &is, Sales_data &item) {
    std::cout << "Please input ISBN: ";
    is >> item.isbn;
    std::cout << "Please input price: ";
    is >> item.price;
    std::cout << "Please input salesAmount: ";
    is >> item.salesAmount;

    return is;
}

std::ostream& print(std::ostream &os, Sales_data item) {
    os << "ISBN:\t" << item.getISBN() << "\n"
        << "Price:\t" << item.price << "\n"
        << "Sales amount:\t" << item.salesAmount << "\n"
        << "Total revenue:\t"<< item.price * item.salesAmount << std::endl;

    return os;
}