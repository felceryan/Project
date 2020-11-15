// int ival = 1.01;
// Valid | ival = 1
// int &rval1 = 1.01;
// Invalid, can't refer to literals only objects
// int &rval2 = ival;
// Valid | rval2 = 1
// int &rval3;
// Not valid, must refer to an object / Must always be initialized.
//1

// int i = 0, &r1 = i; double d = 0, &r2 = d;
// ------------------
// r2 = 3.14159;
// Valid, will make d = 3.14159
// r2 = r1;
// Valid, will make d = 0
// i = r2;
// Valid, will make i = 0
// r1 = d;
// Valid, will make i = 0


#include <iostream>
int main(){
    int i, &ri = i;
    i = 5; ri = 10;
    std::cout << i << " " << ri << std::endl; 
    // I predicit it will output 10 10
    // i = 5 (ri = i)
    // ri = 10 (i = ri)

    return 0;
}

