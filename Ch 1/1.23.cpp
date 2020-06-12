/*Write a program that reads several transactions 
 *and counts how many transactions occur for each ISBN
 */

#include<iostream>
#include"Sales_item.h"

int main(int argc, char* argv[]){
	Sales_item currItem, inputItem;
	int count = 1;
	
	std::cout<<"Input number 1 item: ";
	std::cin>>currItem;

	for(int i = 2; i < 6; i++){
		std::cout<<"Input number " << i << " item: ";
		std::cin>>inputItem;

		if(inputItem.isbn() == currItem.isbn()){
			count ++;
		}else{
			std::cout<<currItem<<" - "<<count<<std::endl;
			currItem = inputItem;
			count = 1;
		}
	}
	return 0;
}

