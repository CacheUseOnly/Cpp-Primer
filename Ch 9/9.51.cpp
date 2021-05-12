/**
 * Write a class that has three unsigned members
 * representing year, month, and day. Write a constructor that takes a string
 * representing a date. Your constructor should handle a variety of date
 * formats, such as January 1, 1900, 1/1/1900, Jan 1, 1900, and so on.
 */

#include <string>
#include <iostream>

unsigned handleMon(std::string mon) {
    if (mon == "Jan" || mon == "January" || mon == "1") {
        return 1;
    } else if (mon == "Feb" || mon == "Feburary" || mon == "2") {
        return 2;
    } // blah blah
}

class Date {
private:
    unsigned year, month, day;
public:
    Date(unsigned Mon, unsigned Day, unsigned Year) {
        year = Year;
        month = Mon;
        day = Day;
    }
    Date(std::string str) {
        std::string buf;
        size_t ind = 0;
        for (; ind < str.size(); ++ind) {
            if (str[ind] == ' ' || str[ind] == ',' || str[ind] == '/') {
                ++ind;
                break;
            }
            buf += str[ind];
        }
        month = handleMon(buf);
        buf.clear();

        for (; ind < str.size(); ++ind) {
            if (str[ind] == ' ' || str[ind] == ',' || str[ind] == '/') {
                ++ind;
                break;
            }
            buf += str[ind];
        }
        day = std::stoi(buf);
        buf.clear();

        for (; ind < str.size(); ++ind) {
            if (str[ind] == ' ' || str[ind] == ',' || str[ind] == '/') {
                ++ind;
                break;
            }
            buf += str[ind];
        }
        year = std::stoi(buf);
    }
};
