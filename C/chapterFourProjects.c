#include <stdio.h>
int main(void){
    int x, y, z, a,
    oct1, oct2, oct3, oct4, oct5,
    i, i1, i2, i3, i4, i5, i6, x1, x2, x3, x4, x5, x6,
    firstSum, secondSum, total;
    
    //printf("Enter a two digit number: ");
    //scanf("%1d%1d",&x ,&y);
    //printf("The reversal is: %d%d\n",y ,x); // What i would have done
    printf("Enter a two digit number: ");
    scanf("%d",&x);
    y = x / 10;
    z = x % 10;
    printf("The reversal is : %d%d\n",z ,y); // what they wanted // 1

    printf("\nEnter a three digit number: ");
    scanf("%d",&x);
    y = x / 100; // 1st number
    z = x % 10; // third number
    a = (x % 100) / 10; // 2nd number
    printf("The reversal is : %d%d%d\n",z, a, y); // 2

    printf("Enter a three digit number: ");
    scanf("%1d%1d%1d",&x ,&y, &z);
    printf("The reversal is: %d%d%d\n",z ,y ,x); // Now they want it // 3

    printf("\nEnter a number between 0 and 32767: ");
    scanf("%d",&x);
    
    oct1 = (((((x / 8) / 8)) / 8) / 8) % 8; // 1st digit
    oct2 = ((((x / 8) / 8)) / 8) % 8; // 2nd digit
    oct3 = (((x / 8) / 8)) % 8; // 3rd digit
    oct4 = (x / 8) % 8; // 4th digit
    oct5 = x % 8; // 5th digit

    printf("Your number in octal is: %d%d%d%d%d\n",oct1 ,oct2 ,oct3 ,oct4 ,oct5); // 4

    printf("Enter your 11 digit UPC code: ");
    scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d",&i, &i1, &i2, &i3, &i4, &i5, &x1, &x2, &x3, &x4, &x5);

    firstSum = i + i2 + i4 + x1 + x3 + x5;
    secondSum = i1 + i3 + i5 + x2 + x4;

    total = 9 - ((((firstSum * 3) + secondSum) - 1) % 10);

    printf("Your check digit is: %d\n",total); // 5

    printf("\nEnter your 12 digit EAN code: ");
    scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d",&i1, &i2, &i3, &i4, &i5, &i6, &x1, &x2, &x3, &x4, &x5, &x6);

    firstSum = i2 + i4 + i6 + x2 + x4 + x6;
    secondSum = i1 + i3 + i5 + x1 + x3 + x5;

    total = 9 - ((((firstSum * 3) + secondSum) - 1) % 10);

    printf("Your check digit is: %d\n",total); // 6


    return 0;
}