/**
 * The program in this section defined its istringstream
 * object inside the outer while loop. What changes would you need to make if
 * record were defined outside that loop? Rewrite the program, moving the
 * definition of record outside the while, and see whether you thought of all
 * the changes that are needed.
 */
#include <string>
#include <vector>
#include <iostream>
#include <sstream>

using namespace std;

struct PersonInfo {
    string name;
    vector<string> phones;
};

int main () {
    string line, word;
    vector<PersonInfo> people; // will hold all the records from the input
    int counter  = 0;
    // read the input a line at a time until cin hits end-of-file (or another error)
    istringstream record(line); // bind record to the line we just read
    while (getline(cin, line) && counter < 3) {
        PersonInfo info; // create an object to hold this record's data
        record.clear();
        record.str(line);
        record >> info.name; // read the name
        while (record >> word) // read the phone numbers
            info.phones.push_back(word); // and store them
        people.push_back(info); // append this record to people
        counter++;
    }

    for (auto person : people) {
        std::cout << "Name: " << person.name << std::endl;
        cout << "Number: ";
        for (auto number : person.phones) {
            cout << number << " ";
        }
        cout << std::endl << endl;
    }

    return 0;
}