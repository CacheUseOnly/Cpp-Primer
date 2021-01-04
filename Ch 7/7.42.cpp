/**
 * For the class you wrote for exercise 7.40 in § 7.5.1 (p. 291),
 * decide whether any of the constructors might use delegation. If so, write the
 * delegating constructor(s) for your class. If not, look at the list of abstractions
 * and choose one that you think would use a delegating constructor. Write the
 * class definition for that abstraction.
 */
#include <iostream>
#include <string>

class Book {
public:
    Book(std::string name, unsigned price, std::string content);
    Book(std::string name);
    Book(unsigned price);
    Book(std::string name, std::string content);
    std::string getTitle();
    unsigned getPrice();
    std::string fetchContent(std::string::iterator begin, std::string::iterator end);
private:
    std::string title;
    unsigned price;
    std::string content;
};

Book::Book(std::string title, unsigned price, std::string content): title(title), price(price), content(content) {}

Book::Book(std::string name): Book(name, 0, " "){}

Book::Book(unsigned price): Book(" ", price, " ") {}

Book::Book(std::string name, std::string content): Book(name, 0, content) {}