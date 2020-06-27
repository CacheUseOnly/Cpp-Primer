// Rewrite the exercises from § 1.4.1 (p. 13) & 2.6.2 with appropriate `using` declarations
#include <iostream>
#include "Sales_data.h"

using std::cout; using std::endl;
using std::cin;

int main(int argc, char* argv[]){
	int elmt = 50, sum;

	while(elmt < 101){
		sum += elmt;
		elmt ++;
	}

	cout << "The sum from 50 to 100 is:" << sum << "."  << endl;
	
	return 0;
}

int _10 (int argc, char* argv[]){
	int sum = 0, elmt = 10;

	while(elmt != 0){
		sum += elmt;
		elmt --;
	}

	cout<<"The sum from 10 to 0 is: "<< sum << "." << endl;

	return 0;
}

int _11 (int argc, char* argv[]){
	int v1 = 0, v2 = 0, elmt;

	cout<<"Please input two numbers: ";
	cin>>v1>>v2;
	elmt = v1;

	while(elmt <= v2){
		cout<<elmt<<" ";
		elmt++;
	}

	
	return 0;
}

int _2_42_1() {
    Sales_data item1, item2;

    cout << "Please input the data of the first item (ISBN, price, sales amount): ";
    cin >> item1.isbn >> item1.price >> item1.salesAmount;
    cout << "Please input the data of the second item (ISBN, price, sales amount): ";
    cin >> item2.isbn >> item2.price >> item2.salesAmount;

    if (!item1.isbn.compare(item2.isbn)) {
        cout << "Total sale is: " << item1.price*item1.salesAmount + item2.price*item2.salesAmount << endl;
        return 0;
    } else {
        cout << "ISBN are not the same." << endl;
        return 1;
    }
}

int _2_42_2() {
    Sales_data previous, input;
    int count = 1;

    cout << "Please input ISBN: ";
    cin >> previous.isbn;

    do {
        cout << "Please input ISBN: ";
        cin >> input.isbn;

        if(!input.isbn.compare(previous.isbn)) {
			count ++;
		}else{
			cout << previous.isbn << " - " << count << endl;
			previous.isbn = input.isbn;
			count = 1;
		}
    } while(true);

	return 0;
}

int _2_42_3() {    
    Sales_data total; // variable to hold data for the next transaction    
    // read the first transaction and ensure that there are data to process    
    if (cin >> total.isbn >> total.price >> total.salesAmount) {        
        Sales_data trans; // variable to hold the running sum        
        // read and process the remaining transactions        
        while (cin >> trans.isbn >> trans.price >> trans.salesAmount) {            // if we're still processing the same book            
            if (!total.isbn.compare(trans.isbn))                
                total.salesAmount += trans.salesAmount; // update the running total            
            else {                // print results for the previous book                
                cout << total.isbn << " - " << total.salesAmount*total.price << endl;                
                total = trans;  // total now refers to the next book            
            }        
        }        cout << total.isbn << " - " << total.price*total.salesAmount << endl; // print the last transaction    
    } else {        // no input! warn the user        
        std::cerr << "No data?!" << endl;        
        return -1;  // indicate failure    
    }
    return 0; 
}