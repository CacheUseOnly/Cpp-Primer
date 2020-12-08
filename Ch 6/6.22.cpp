// Write a function to swap two int pointers.
#include <iostream>

void swap(int* &pt1, int* &pt2);

int main() {
    int a = 5, b = 3; 
    int *ptr1, * ptr2;
    ptr1 = &a; ptr2 = &b;

    std::cout << "ptr1: " << *ptr1 << " ptr2: " << *ptr2;

    swap(ptr1, ptr2);

    std::cout << "\nptr1: " << *ptr1 << " ptr2: " << *ptr2;

    return 0;
}

void swap(int* &pt1, int* &pt2) {
    int *temp = pt2;
    pt2 = pt1;
    pt1 = temp;
}