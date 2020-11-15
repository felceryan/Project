// 'a' is a char | L'a' is wchar_t
// "a" is a char | L"a" is wchar_t

// 10 is a int | 10u is a unsigned int
// 10L is a long int | 10uL is a unsigned long int
// 012 is a int | 0xC is a int

// 3.14 is a double float | 3.14f is a float
// 3.14L is a long float

// 10 is a int | 10u is an unsigned int
// 10. is a double float | 10e-2 is a double float
//1

// int month = 9, day = 7 // integer values represented with decimal
// int month = 09, day = 07 // integer literals represented with octal


//int main(){
    //int month = 09, day = 07;
    //std::cout << month << std::endl; // is invalid
    //std::cout << day << std::endl; // would come out as 7
    //return 0;
//}

//2

// "Who goes with F\145rgus?\012"
// string literal
// type char
// octal 145 = decimal 101, char 101 = e
// octal 012 = decimal 10, char 10 = \n
// This would be : "Who goes with Fergus?\n"

// 3.14e1L
// float literal
// type long double float
// 31.4

// 1024f this is an error but to fix it would be to use
// 1024.f
// float literal
// type float
// 1024
//3

#include <iostream>

int main(){
    std::cout << "2M\n" << std::endl;
    std::cout << "2\tM\n" << std::endl;
    return 0;
}
//4

