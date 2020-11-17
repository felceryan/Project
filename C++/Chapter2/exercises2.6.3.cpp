#include "bookData.h"
#include <iostream>

int main(){
    bookData bookOne, bookTwo;
    
    std::cin >> bookOne.bookNumber >> bookOne.bookSold >> bookOne.bookPrice;
    bookOne.bookRevenue = bookOne.bookPrice * bookOne.bookSold;

    std::cin >> bookTwo.bookNumber >> bookTwo.bookSold >> bookTwo.bookPrice;
    bookTwo.bookRevenue = bookTwo.bookPrice * bookTwo.bookSold;

    if (bookOne.bookNumber == bookTwo.bookNumber){
        unsigned totalCount = bookOne.bookSold + bookTwo.bookSold;
        double totalRevenue = bookOne.bookRevenue + bookTwo.bookRevenue;

        std::cout << bookOne.bookNumber << " " << totalCount << " "
        << totalRevenue << " ";

        if (totalCount != 0){
            std::cout << totalRevenue / totalCount << std::endl;
        }
        else {
            std::cout << "*NO SALES*" << std::endl;
        }
    }
    else{
        std::cerr << "*BOTH BOOK NUMBERS MUST MATCH*" << std::endl;
        return -1;
    }



    return 0;
}