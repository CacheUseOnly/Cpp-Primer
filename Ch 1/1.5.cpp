#include<iostream>

int main(int argc, char* argv[]){
	int v1, v2;
	std::cout<<"Please input two numbers:";
	std::cin>>v1>>v2;

	std::cout<<"The product of two numbers is"
		<<v1 * v2
		<<" "
		<<std::endl;

	return 0;
}
