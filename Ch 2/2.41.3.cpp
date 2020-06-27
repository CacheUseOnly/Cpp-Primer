// Rewrite 1.25

/*
 * Using the Sales_item.h header from the Web site, 
 * compile and execute the bookstore program presented in this section
 */

#include <iostream> 

struct Sales_data
    {
        std::string isbn;
        int price;
        unsigned salesAmount;
        char month;
        char date;
    };

int main() {    
    Sales_data total; // variable to hold data for the next transaction    
    // read the first transaction and ensure that there are data to process    
    if (std::cin >> total.isbn >> total.price >> total.salesAmount) {        
        Sales_data trans; // variable to hold the running sum        
        // read and process the remaining transactions        
        while (std::cin >> trans.isbn >> trans.price >> trans.salesAmount) {            // if we're still processing the same book            
            if (!total.isbn.compare(trans.isbn))                
                total.salesAmount += trans.salesAmount; // update the running total            
            else {                // print results for the previous book                
                std::cout << total.isbn << " - " << total.salesAmount*total.price << std::endl;                
                total = trans;  // total now refers to the next book            
            }        
        }        std::cout << total.isbn << " - " << total.price*total.salesAmount << std::endl; // print the last transaction    
    } else {        // no input! warn the user        
        std::cerr << "No data?!" << std::endl;        
        return -1;  // indicate failure    
    }
    return 0; 
}