#include <stdio.h>

int main(void){
    int i, i1, i2, i3, i4, i5, x1, x2, x3, x4, x5,
    firstSum, secondSum, total;

    printf("Enter the 1st single digit of the UPC code: ");
    scanf("%1d",&i);
    printf("Enter the 1st group of five digits: ");
    scanf("%1d%1d%1d%1d%1d",&i1 ,&i2 ,&i3 ,&i4 ,&i5);
    printf("Enter the 2nd group of five digits: ");
    scanf("%1d%1d%1d%1d%1d",&x1 ,&x2 ,&x3 ,&x4 ,&x5);

    firstSum = i + i2 + i4 + x1 + x3 + x5;
    secondSum = i1 + i3 + i5 + x2 + x4;

    total = 9 - ((((firstSum * 3) + secondSum) - 1) % 10);

    printf("Your check digit is: %d\n",total);


    return 0;
}