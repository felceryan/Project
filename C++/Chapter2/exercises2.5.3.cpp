#include <iostream>

// int a = 3, b = 4;
// decltype(a) c = a;
// decltype((b)) d = a;
// ++c;
// ++d;

// a = 4
// (a = 3) | &d = a | ++d

// b = 4

// c = 4
// (c = 3) + 1
// d = 4
// &d = a

//int main(){
//    int a = 3, b = 4;
//    decltype(a) c = a;
//    decltype((b)) d = a;
//    ++c;
//    ++d;
//
//    std::cout << a << std::endl;
//    std::cout << b << std::endl;
//    std::cout << c << std::endl;
//    std::cout << d << std::endl;
//
//    return 0;
//}
////1

// int a = 3, b = 4;
// decltype(a) c = a;
// decltype(a = b) d = a;
// int a = 3
// int b = 4
// int c = 3
// int &d = a (3)

//int main(){
//    int a = 3, b = 4;
//    decltype(a) c = a;
//    decltype(a = b) d = a;
//
//    std::cout << a << std::endl;
//    std::cout << b << std::endl;
//    std::cout << c << std::endl;
//
//
//    return 0;
//}
//2

// int x = 100, z = 50;
// auto y = x;
// decltype(x) z = x;
// Both will be int and both be 100.

// auto y = x; // int y = 100
// decltype(x = z) y = x; // reference int &y = x (100)

// The main difference between auto and decltype is that decltype will
// find the type from an expression without using the expression to init the variable.

