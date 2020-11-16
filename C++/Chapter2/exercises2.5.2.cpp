// PAGE 108 IMPORTANT CONTEXT
// a = 42; b = 42; c = 42;
// d = 42; e = 42; g = 42;

// auto a = r -> int &r = int i -> i = 0
// int a = r 
// a = 42.

// auto b = ci -> const int ci = i -> int i = 0
// int b = ci
// b = 42.

// auto c = cr -> cr = const int &cr = ci -> const int ci = i -> int i = 0
// int c = cr 
// c = 42. 

// auto d = &i -> int i = 0
// int *d = &i
// d = 42 ! ERROR
// *d = 42 would work

// auto e = &ci -> const int ci = i -> int i = 0
// const int* e = &ci
// e = 42 ! ERROR
// CAN'T ASSIGN PLAIN INT TO POINTER TO INT.
// CONST OBJECTS CANT CHANGE VALUE!

// auto &g = ci -> const int ci = i -> int i = 0
// const int &g = ci
// g = 42 ! ERROR
// CONST OBJECTS CANT CHANGE VALUE
//1

#include <iostream>
//int main(){
//    int i = 0, &r = i;
//    auto a = r;
//    const int ci = i, &cr = ci;
//    auto b = ci;
//    auto c = cr;
//    auto d = &i;
//    auto e = &ci;
//    auto &g = ci;
//
//    a = 42; b = 42; c = 42; *d = 42; // e = 42; g = 42; // errors
//    std::cout << a << " "; //42
//    std::cout << b << " "; //42
//    std::cout << c << " "; //42
//    std::cout << *d << " "; //42
// 
//
//
//    return 0;
//}
//2


int main(){
    const int i = 42; // const int
    auto j = i; // int
    const auto &k = i; // const int reference
    auto *p = &i; // pointer to const int
    const auto j2 = i, &k2 = i; // j2 = const int
                                // k2 = const int reference
    return 0;
}
//3