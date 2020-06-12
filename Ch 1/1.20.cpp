/*
 * Use it to write a program that reads a set of book sales transactions,
 * writing each transaction to the standard output
 */
#include<iostream>
#include"Sales_item.h"

int main(int argc, char* []){
	Sales_item item;
	int count = 0;

	while(count < 2){
		std::cout<<"Please input transaction: ";
		std::cin>>item;
		std::cout<<item<<std::endl;

		count++;
	}

	return 0;
}

