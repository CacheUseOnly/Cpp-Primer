/*
 * Write a program that uses a while to sum the numbers from 50 to 100
 */

#include<iostream>

int main(int argc, char* argv[]){
	int elmt = 50, sum;

	while(elmt < 101){
		sum += elmt;
		elmt ++;
	}

	std::cout<<"The sum from 50 to 100 is:" << sum <<"."  << std::endl;
	
	return 0;
}
