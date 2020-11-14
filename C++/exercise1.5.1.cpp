#include <iostream>
#include "Sales_item.h"

int main(){
    Sales_item inputOne, inputTwo, sum;

    std::cout << "Enter two ISBN numbers that are the same: " << std::endl;
    std::cin >> inputOne >> inputTwo;
    sum = inputOne + inputTwo;
    std::cout << "Your two ISBN numbers added: " << sum << std::endl;
    //1 

    std::cout << "Enter as many ISBN numbers that are the same: " << std::endl;
    while(std::cin >> inputOne){
        sum = inputOne;
        while(std::cin >> inputTwo){
            sum += inputTwo;
        }
    }
    std::cout << "The total sum of your input is : " << sum << std::endl;
    //2

    
    return 0;
}