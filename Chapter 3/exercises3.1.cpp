#include <iostream>
#include "bookData.h"

using std::cout; using std::endl; using std::cin; using std::cerr;

//int main(){
//    int sum = 0, val = 1;
//    while (val <= 10){
//        sum += val;
//        ++val;
//    }
//    cout << "Sum of 1 to 10 inclusive is " << sum << endl;
//
//    return 0;
//}
//1

int main(){
    bookData bookOne, bookTwo;

    cout << "Enter bookOne data: ";
    cin >> bookOne.bookNumber >> bookOne.bookSold >> bookOne.bookPrice;
    bookOne.bookRevenue = bookOne.bookPrice * bookOne.bookSold;

    cout << "Enter bookTwo data: ";
    cin >> bookTwo.bookNumber >> bookTwo.bookSold >> bookTwo.bookPrice;
    bookTwo.bookRevenue = bookTwo.bookPrice * bookTwo.bookSold;

    if(bookOne.bookNumber == bookTwo.bookNumber){
        unsigned int totalSold = bookOne.bookSold + bookTwo.bookSold;
        double totalRevenue = bookOne.bookRevenue + bookTwo.bookRevenue;

        cout << bookOne.bookNumber << " " << totalSold;
        if(totalSold != 0){
            cout << " " << totalRevenue << " " << totalRevenue / totalSold << endl;
        }
        else{
            cout << " " << "*NO SALES*" << endl;
        }
    }
    else{
        cerr << "*NON-MATCHING NUMBERS*" << endl;
    }



    return 0;
}
//2