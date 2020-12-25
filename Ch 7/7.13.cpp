/**
 * Rewrite the program from page 255 to use the istream
 * constructor.
 */
#include "Sales_data.h"

using namespace std;

int main() {
    Sales_data total(cin);                                  // variable to hold the running sum
    if (cin) {                                              // read the first transaction
        Sales_data trans(cin);                              // variable to hold data for the next transaction
        while(read(cin, trans)) {                           // read the remaining transactions
            if (total.getISBN() == trans.getISBN())         // check the isbns
                total.combine(trans);                       // update the running total
            else {
                print(cout, total) << endl;                 // print the results
                total = trans;                              // process the next book
            }
        }
        print(cout, total) << endl;                         // print the last transaction
    } else {                                                // there was no input
        cerr << "No data?!" << endl;                        // notify the user
    }

    return 0;
}