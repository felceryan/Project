#include <iostream>

int main(){
    int sum = 0;
    
    for (int i = -100; i <= 100; ++i){ // this will do -100 to 100 inclusive
        sum += i; // i predict it will be 100
    }
    std::cout << sum << std::endl; // came out as 0 // i understand now because sum of 1 to 100 is 5050 and sum of -100 to -1 is -5050
    //1

    for (int val = 50; val <= 100; ++val){
        sum += val;
    }
    std::cout << "Sum of 50 to 100 inclusive is: "
    << sum << std::endl;

    for (int val = 10 ;val >= 0; --val){
        std::cout << val << std::endl;
    }

    sum = 0; int val, val2, unchangedOne, unchangedTwo;
    std::cout << "\n\nEnter two numbers (Smallest number first):" << std::endl;
    std::cin >> val >> val2;
    unchangedOne = val;
    unchangedTwo = val2;
    for (val; val <= val2; ++val){
        sum += val;
    }
    std::cout << "Sum of " << unchangedOne << " to " << unchangedTwo
    << " inclusive is " << sum << std::endl;
    //2

    

    return 0;
}