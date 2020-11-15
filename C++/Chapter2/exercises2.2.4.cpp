#include <iostream>

int i = 42;

int main(){
    //int i = 100;
    //int j = i; // Value would be 100
    // if it was j = ::i then it would be 42
    //1


    int i = 100, sum = 0;
    for (int i = 0; i != 10; ++i){
        sum += i;
    }
    std::cout << i << " " << sum << std::endl;
    // 100 45
    // sum = 0 + 1 + 2 + 3 + 4 + 5 + 6 + 7 + 8 + 9 
    //2


    return 0;
}