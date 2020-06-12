/*
 *  In addition to the ++ operator that adds 1 to its operand,
 *  there is a decrement operator (--) that subtracts 1. 
 *  Use the decrement operator to write a while that prints the numbers from ten down to zero
 */
#include<iostream>

int main(int argc, char* argv[]){
	int sum = 0, elmt = 10;

	while(elmt != 0){
		sum += elmt;
		elmt --;
	}

	std::cout<<"The sum from 10 to 0 is: "<< sum << "." <<std::endl;

	return 0;
}
