// Write your own version of the Account class.
#include <string>

class Account {
private:
    static const int interestRate = 0.05;
    std::string name;
    double balance;
public:
    Account(std::string name, double balance): name(name), balance(balance) {};
    Account(std::string name): Account(name, 0) {};
    void getName();
    void getBalance();
    void setName();
    void setBalance();
    void calculate(int months);
};