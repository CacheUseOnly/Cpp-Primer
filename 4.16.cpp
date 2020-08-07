/* Although the following are legal, they probably do not behave as the programmer expects. 
 * Why? Rewrite the expressions as you think they should be. 
 */


int* getPtr();

int main() {
    int *p;
    int i;

    if (p = getPtr() != 0)
//  if ((p = getPtr()) != 0)
    
    if (i = 1024)
//  if (i == 1024)W
}