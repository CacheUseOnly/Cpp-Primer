/*
 * The last example in this section that jumped back to begin
 * could be better written using a loop. Rewrite the code to eliminate the goto.
 */

// backward jump over an initialized variable definition is okay
/* begin:
    int sz = get_size();
    if (sz <= 0) {
          goto begin;
    }
*/

int main() {
    while(1){
        int sz = get_size();
        if (sz <= 0) {
            continue;
        } else {
            break;
        }
    }
}