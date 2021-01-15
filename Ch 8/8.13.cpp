/**
 * Rewrite the phone number program from this section to read
 * from a named file rather than from cin.
 */
#include <string>
#include <vector>
#include <iostream>
#include <sstream>
#include <fstream>

using namespace std;

struct PersonInfo {
    string name;
    vector<string> phones;
};

int main () {
    string line, word;
    vector<PersonInfo> people; // will hold all the records from the input
    std::ifstream file("8.13.txt");
    // read the input a line at a time until cin hits end-of-file (or another error)
    istringstream record(line); // bind record to the line we just read
    while (getline(file, line)) {
        PersonInfo info; // create an object to hold this record's data
        record.clear();
        record.str(line);
        record >> info.name; // read the name
        while (record >> word) // read the phone numbers
            info.phones.push_back(word); // and store them
        people.push_back(info); // append this record to people
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