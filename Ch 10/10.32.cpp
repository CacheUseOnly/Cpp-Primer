/**
 * Rewrite the bookstore problem from § 1.6 (p. 24) using a
 * vector to hold the transactions and various algorithms to do the processing.
 * Use sort with your compareIsbn function from § 10.3.1 (p. 387) to
 * arrange the transactions in order, and then use find and accumulate to
 * do the sum. 
 */

#include <iostream>
#include <string>
#include <vector>
#include <numeric>
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
    Sales_data (): ISBN(""), name("placeholder"){}

    std::string getISBN() const {
        return ISBN;
    }

    std::string getName() const {
        return name;
    }
};

class Transaction {
private:
    Sales_data __book;
    int __date;
    long __amount;
public:
    Transaction(Sales_data book, int date, long amount) {
        __book = book;
        __date = date;
        __amount = amount;
    }

    // Transaction(): __book(new Sales_data()), __date(0), __amount(0) {}

    Sales_data getBookInfo() { return __book;}
    int getDate() { return __date;}
    long getAmount() { return __amount;}
};

bool compareIsbn(Transaction &data1, Transaction &data2) {
    return data1.getBookInfo().getISBN() > data2.getBookInfo().getISBN();
}

int main() {
    std::vector<Transaction> vec;
    Sales_data book1("A12345", "book1");
    Sales_data book2("B12345", "book2");
    Sales_data book3("C12345", "book3");
    Sales_data book4("D12345", "book4");

    vec.push_back(Transaction(book1, 3, 34));
    vec.push_back(Transaction(book1, 2, 84));
    vec.push_back(Transaction(book2, 1, 23));
    vec.push_back(Transaction(book3, 2, 14));
    vec.push_back(Transaction(book2, 4, 18));
    vec.push_back(Transaction(book4, 3, 28));
    vec.push_back(Transaction(book1, 3, 29));

    std::sort(vec.begin(), vec.end(), compareIsbn);
    std::cout << "Accumulation: \n" << std::for_each(vec.begin(), vec.end(), [](Transaction &tran) {
        std::cout << tran.getBookInfo().getName() << " " << tran.getAmount() << " " << tran.getDate() << std::endl;
    });

    return 0;
}