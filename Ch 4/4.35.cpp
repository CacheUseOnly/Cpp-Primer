// Given the following definitions, identify the implicit type conversions, if any, taking place: 

char cval;          int ival;    
unsigned int ui;    float fval; double dval;

int main() {
    cval = 'a' + 3;             // 'a' convert to int, sum of 'a' and 3 to char
    fval = ui - ival * 1.0;     // ival to double, ui convert to double, result convert to float
    dval = ui * fval;           // ui convert to float, product convert to double
    cval = ival + fval + dval;  // ival convert to float, ival+fval convert to double, result convert to char
}