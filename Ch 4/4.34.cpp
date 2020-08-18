// Given the variable definitions in this section, explain what conversions take place in the following expressions: 

bool    flag;         
char    cval; 
short   sval;         
unsigned short  usval; 
int     ival;         
unsigned int    uival; 
long    lval;         
unsigned long   ulval; 
float   fval;         
double  dval; 

if (fval)
// if fval is 0, then flag is false, otherwise true
dval = fval + ival; 
// ival to float then to double, fval to double
dval + ival * cval;
// cval to int, product of ival and cval to double
