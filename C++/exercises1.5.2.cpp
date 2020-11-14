#include <iostream>
#include "Sales_item.h"

int main(){
    Sales_item inputOne, inputTwo;

    if(std::cin >> inputOne){
        int cnt = 1;
        while(std::cin >> inputTwo){
            if(inputTwo.isbn() == inputOne.isbn()){
                ++cnt;
            }
            else{
                std::cout << "Your input occured " << cnt << " times." << std::endl;
                cnt = 1;
                inputOne = inputTwo;
            }
        }
        std::cout << "Your input occured " << cnt << " times." << std::endl;
    }
    //1 and 2

    return 0;
}