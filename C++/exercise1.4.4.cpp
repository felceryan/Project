#include <iostream>

int main(){
    //int currVal = 0, val = 0;

    //if (std::cin >> currVal){
    //    int cnt = 1;
    //    while (std::cin >> val){
    //        if (val == currVal)
    //            ++cnt;
    //        else {
    //            std::cout << currVal << " occurs " << cnt << " times" << std::endl;
    //            currVal = val;
    //            cnt = 1;
    //        }
    //    }
    //    std::cout << currVal << " occurs " << cnt << " times" << std::endl;
    //}

    // if all the input values are equal the program won't print the count until end of file or wrong type is entered or until a different number is input.
    // if all the numbers are different then it will print every number and their count except for the last one unless a different number or end of file or wrong input type is entered.
    // 1 and 2
    
    int x, y;
    std::cout << "Enter two numbers to print their range: ";
    std::cin >> x >> y;
    if (x > y){
        while (x > y){
            ++y;
            std::cout << y << std::endl;
        }
    }
    else {
        while (y > x){
            ++x;
            std::cout << x << std::endl;
        }
    } //3
    return 0;

}