#include <iostream>

int main(){
    int sum = 0, val = 50;
    while (val <= 100){
        sum += val;
        ++val;
    }
    std::cout << "Sum of 50 to 100 inclusive is: "
    << sum << std::endl; //1

    val = 10;
    while (val >= 0){
        std::cout << val << std::endl;
        --val;
    } //2

    sum = 0, val = 0; int val2, unchangedOne, unchangedTwo;
    std::cout << "\n\nEnter two numbers (Smallest number first):" << std::endl;
    std::cin >> val >> val2;
    unchangedOne = val;
    unchangedTwo = val2;
    while (val <= val2){
        std::cout << val << std::endl;
        ++val;
    } //3

    //std::cout << "Numbers inbetween " << unchangedOne << " to " << unchangedTwo
    //<< " is " << sum << std::endl; //3

    return 0;
}