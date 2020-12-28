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
    long revenue;

    std::string getISBN();
    Sales_data& combine(Sales_data item);
    inline double getAvg() const;
};

Sales_data::Sales_data(): isbn(""), price(0), salesAmount(0){    
}

Sales_data::Sales_data(std::string ISBN) {
    isbn = ISBN;
}

Sales_data::Sales_data(std::istream &is) {
    read(is, *this);
}

inline double Sales_data::getAvg() const {
    return revenue/salesAmount;
}

Sales_data& Sales_data::combine(Sales_data item) {
    revenue += item.revenue;
    salesAmount += item.salesAmount;
    return *this;
}

std::string Sales_data::getISBN() {
    return isbn;
}

Sales_data& add(Sales_data item1, Sales_data item2) {
    item1.revenue += item2.revenue;
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

    item.revenue = item.price*item.salesAmount; 

    return is;
}

std::ostream& print(std::ostream &os, Sales_data item) {
    os << "ISBN:\t" << item.getISBN() << "\n"
        << "Price:\t" << item.price << "\n"
        << "Sales amount:\t" << item.salesAmount << "\n"
        << "Total revenue:\t"<< item.revenue << std::endl;

    return os;
}