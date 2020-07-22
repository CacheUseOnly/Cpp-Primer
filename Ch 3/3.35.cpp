// Using pointers, write a program to set the elements in an array to zero. 

int main() {
    int ia[10];

    for (auto ptr = ia; ptr != ia + sizeof(ia); ++ptr) {
        *ptr = 0;
    }

    return 0;
}