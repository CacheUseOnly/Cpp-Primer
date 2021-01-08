#include <string>
#include <iostream>

class Person
{
private:
    std::string name;
    std::string address;
public:
    Person();
    explicit Person(std::string name);      // question 7.50
    std::string getName() const;
    std::string getAddress() const;
    void setName(std::string name);
    void setAddress(std::string address);
};

Person::Person(): name(""), address("") {

}

Person::Person(std::string name): name(name), address("") {
    
}

std::string Person::getAddress() const {
    return address;
}

std::string Person::getName() const {
    return name;
}

void Person::setName(std::string name) {
    this->name = name;
}
    
void Person::setAddress(std::string address) {
    this->address = address;
}

std::istream& read(std::istream &is, Person &person) {
    std::string temp;

    std::cout << "Please input the name: ";
    is >> temp;
    person.setName(temp);
    std::cout << "Please input the address: ";
    is >> temp;
    person.setAddress(temp);

    return is;
}

std::ostream& print(std::ostream& os, Person &person) {
    os << "Name:\t" << person.getName() << "\n"
        << "Address:\t" << person.getAddress() << "\n";

    return os;
}