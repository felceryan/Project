#include <iostream>

struct salesData{
    int bookNumber;
    int bookSold;
    double bookPrice;
    double bookRevenue;

};


int main(){
    salesData book1, book2;

    std::cout << "Enter data for book1 (Number -> Price -> Sold): ";
    std::cin >> book1.bookNumber >> book1.bookPrice >> book1.bookSold;
    book1.bookRevenue = book1.bookPrice * book1.bookSold;

    std::cout << "\nEnter data for book2 (Number -> Price -> Sold): ";
    std::cin >> book2.bookNumber >> book2.bookPrice >> book2.bookSold;
    book2.bookRevenue = book2.bookPrice * book2.bookSold;

    if (book1.bookNumber == book2.bookNumber){
        unsigned cnt = book1.bookSold + book2.bookSold;
        double  totalRevenue = book1.bookRevenue + book2.bookRevenue;

        std::cout << book1.bookNumber << " " << cnt << " " << totalRevenue;

        if (cnt != 0){
            std::cout << " " << totalRevenue / cnt << std::endl;
        }
        else {
            std::cout << " " << "*NO SALES*" << std::endl;
        }

    }
    else {
        std::cerr << "Book number must be matched" << std::endl;
        return -1;
    }

    return 0;
}