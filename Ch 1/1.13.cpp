/* 
 * Rewrite the exercises from § 1.4.1 (p. 13) using for loops. 
 * (1.9.cpp)
 */

#include<iostream>

int main(int argc, char* argv[]){
	int sum = 0;

	for (int elmt = 50; elmt < 101; elmt++) {
		sum += elmt;
	}

	std::cout<<"The sum from 50 to 100 is:" << sum <<"."  << std::endl;
	
	return 0;
}