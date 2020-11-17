// Page 116
#include <iostream>

struct bookData {
    int bookNumber;
    int bookSold;
    double bookPrice;
    double bookRevenue;
};

int main(){
    //bookData book;
    
    //std::cin >> book.bookNumber >> book.bookSold >> book.bookPrice;
    //std:: cout << book.bookNumber << " " << book.bookSold << " " << book.bookSold * book.bookPrice <<
    //" " << book.bookPrice << std::endl;
    //1
    
    // -----------------------------------------------------------------------------------------------------------------

    //bookData bookOne, bookTwo;
    //
    //std::cin >> bookOne.bookNumber >> bookOne.bookSold >> bookOne.bookPrice;
    //std::cin >> bookTwo.bookNumber >> bookTwo.bookSold >> bookTwo.bookPrice;

    //if (bookOne.bookNumber == bookTwo.bookNumber){
    //    unsigned int totalSold = bookOne.bookSold + bookTwo.bookSold;
    //    double totalRevenue = (bookOne.bookPrice * bookOne.bookSold) + (bookTwo.bookPrice * bookTwo.bookSold);
    //    
    //    std::cout << bookOne.bookNumber << " " << totalSold << " " << totalRevenue;

    //    if (totalSold != 0){
    //        std::cout << " " << totalRevenue / totalSold << std::endl;
    //    }
    //}
    //2

    // -----------------------------------------------------------------------------------------------------------------

    bookData total;

    if (std::cin >> total.bookNumber >> total.bookSold >> total.bookPrice){
        total.bookRevenue = total.bookPrice * total.bookSold; 

        bookData transaction;

        while (std::cin >> transaction.bookNumber >> transaction.bookSold >> transaction.bookPrice){
            transaction.bookRevenue = transaction.bookPrice * transaction.bookSold;

            if (total.bookNumber == transaction.bookNumber){
                
                total.bookSold += transaction.bookSold;
                total.bookRevenue += transaction.bookRevenue;
            }
            else {
                
                std::cout << total.bookNumber << " " << total.bookSold << " " << total.bookRevenue << " "
                << total.bookRevenue / total.bookSold << std::endl;
                
                total.bookNumber = transaction.bookNumber;
                total.bookSold = transaction.bookSold;
                total.bookPrice = transaction.bookPrice;
                total.bookRevenue = transaction.bookPrice * transaction.bookSold;
            }
        }
        std::cout << total.bookNumber << " " << total.bookSold << " " << total.bookRevenue << " "
                << total.bookRevenue / total.bookSold << std::endl;
    }
    else {
        
        std::cerr << "*NO DATA*" << std::endl;
        
        return -1;
    }

    return 0;
    //3

}
