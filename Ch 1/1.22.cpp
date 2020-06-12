/*Write a program that reads several transactions for the same ISBN.
 *Write the sum of all the transactions that were read.
 */
#include<iostream>
#include"Sales_item.h"

int main(int argc, char* argv[]){
	Sales_item item1, item2, item3;

	std::cout<<"Please input first transaction: ";
	std::cin>>item1;
	std::cout<<"Please input second transaction: ";
	std::cin>>item2;
	std::cout<<"Please input third transaction: ";
	std::cin>>item3;

	std::cout<<"\nFinal: "<<item1+item2+item3<<std::endl;

	return 0;
}

