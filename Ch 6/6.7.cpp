/**
 * Write a function that returns 0 when it is first called and then
 * generates numbers in sequence each time it is called again.
 */
int foo();

int main() {
    int i;
    i = foo();
    i = foo();
    i = foo();

    return 0;
}

int foo() {
    static int count = 0;

    count++;
    return count;
}