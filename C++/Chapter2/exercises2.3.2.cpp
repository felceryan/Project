#include <iostream>

int main(){
    int x = 10, y = 20, *p = &x;
    *p = 100;
    std::cout << x << std::endl;
    p = &y;
    std::cout << *p << std::endl;
    //1

    // The difference between a pointer and a reference is for one
    // A pointer is an object meaning it can point to other objects.
    // A reference must be initialised at declaration and it will forever
    // reference whatever it was declared with.
    // A reference is basically an alias to whatever object it references
    // whereas a pointer is its own object.
    //2 

    // int i = 0
    // -------------------
    // double* dp = &i;
    // Invalid as the pointer type must match to the type it is pointing to
    // int *ip = i;
    // Invalid as the pointer must point to the address not a literal.
    // int *p = &i;
    // Valid
    //3

    // int *p;
    // if(p) // if the pointer is holding an address that isn't null it will return true
    // if(*p) // if the pointers value is not 0 it will return true
    //4

    // it wouldn't be possible to tell if a pointer was pointing to a valid address
    // as if a pointer was uninitialised the address would most likely be
    // the bits from where the pointer resides, no way knowing if its valid or not.
    //5
    
    // int i = 42; void *p = &i; long *lp = &p;
    // p is legal because void pointers can hold any object type whereas a long pointer can only hold
    // long objects.
    //6

    return 0;
}