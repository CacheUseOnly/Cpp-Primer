/**
 * Write your own versions of each of the print functions
 * presented in this section. Call each of these functions to print i and j
 * defined as follows:
 * int i = 0, j[2] = {0, 1};
 */

#include <iostream>
#include <array>

void print(const int* arr);
void print(const int* begin, const int* end);
void print(const int* arr, size_t size);
void print_ref(int (&arr)[2]);

int main() {
    int i = 0, j[2] = {0, 1};

    //print(j);
    //std::cout << std::endl;   this function doesn't work well with data array
    print(&j[0], &j[1]);
    std::cout << std::endl;
    print(j, 2);
    std::cout << std::endl;
    print_ref(j);

    return 0;
}

// void print(const int* arr) {
//     if (arr) {
//         while(arr != nullptr) {
//             std::cout << *arr++ << " ";
//         }
//     }
// }

void print(const int* begin, const int* end) {
    while ((begin-1) != end) {
        std::cout << *begin << " ";
        begin++;
    }
}
void print(const int* arr, size_t size) {
    for (size_t i = 0; i != size; ++i) {
        std::cout << arr[i] << " ";
    }
}

void print_ref(int (&arr)[2]) {
    for (auto i : arr) {
        std::cout << i << " ";
    }
}