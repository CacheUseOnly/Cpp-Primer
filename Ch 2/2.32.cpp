/* Is the following code legal or not? If not, how might you make it legal?
 * int null = 0, *p = null;
 */

int main() {
    int null = 0, *p = &null;
}