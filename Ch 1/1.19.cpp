/*
 *Revise the program you wrote for the exercises in § 1.4.1 (p. 13)
 *that printed a range of numbers so that it handles input 
 *in which the first number is smaller than the second 
 */
#include<iostream>

int main(int argc, char* argv[]){
	int v1, v2;
	
	std::cout<<"Please input two numbers: ";
	std::cin>>v1>>v2;
	
	int elmt = v1;
	while(elmt < v2){
		std::cout<<elmt<<" ";
		elmt++;
	}

	while(v2 < elmt){
		std::cout<<v2<<" ";
		v2++;
	}

	std::cout<<elmt<<std::endl;

	return 0;
}
