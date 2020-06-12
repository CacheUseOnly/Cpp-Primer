/*
 *Write code to change the value of a pointer. 
 *Write code to change the value to which the pointer points.
 */

#include<iostream>

int main(){
	int ref = 5;
	int *pt1, *pt2;

	pt1 = &ref;
	pt2 = pt1;

	std::cout<<"pt1: "<<*pt1<<", pt2: "<<*pt2;
	
	return 0;
}
