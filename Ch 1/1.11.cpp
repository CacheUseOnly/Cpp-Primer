/*
 * Write a program that prompts the user for two integers.
 * Print each number in the range specified by those two integers
 */
#include<iostream>

int main(int argc, char* argv[]){
	int v1 = 0, v2 = 0, elmt;

	std::cout<<"Please input two numbers: ";
	std::cin>>v1>>v2;
	elmt = v1;

	while(elmt <= v2){
		std::cout<<elmt<<" ";
		elmt++;
	}

	
	return 0;
}
