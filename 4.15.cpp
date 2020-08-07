// The following assignment is illegal. Why? How would you correct it?

int main() {
    double dval; 
    int ival; 
    int *pi; 
    dval = ival = pi = 0; 
}

/* a value of type "int *" cannot be assigned to an entity of type "int"
 * change to "*pi" solves the problem
 */