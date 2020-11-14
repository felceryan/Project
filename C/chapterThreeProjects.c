#include <stdio.h>

int main(void){
    
    int day, month, year, item, gs1, groupId, publisherCode, itemNumber, checkDigit,
    phoneNumberOne, phoneNumberTwo, phoneNumberThree,
    x1, x2, x3, x4, x5, x6, x7, x8, x9, x10, x11, x12, x13, x14, x15, x16,
    num1, denom1, num2, denom2, resultNum, resultDenom;
    
    float unitPrice;

    printf("Enter a date (dd/mm/yyyy): ");
    scanf("%d /%d /%d", &day, &month, &year);
    printf("You entered the date: %d%d%d",day ,month, year); //1

    printf("\n\nEnter item number: ");
    scanf("%d", &item);
    printf("Enter item price: ");
    scanf("%f", &unitPrice);
    printf("Enter purchase date (dd/mm/yyyy): ");
    scanf("%d /%d /%d", &day, &month, &year);

    //printf("\n\nItem\t\tUnit\t\tPurchase\n\t\tPrice\t\tDate\n%d\t\t%.2f\t\t%d/%d/%d\n\n",item ,unitPrice, day, month, year); // what i would have done but not what they asked.
    printf("\n\nItem\t\tUnit\t\tPurchase\n\t\tPrice\t\tDate\n%d\t\t$%8.2f%9d/%d/%d",item ,unitPrice ,day ,month ,year); // 2


    printf("\n\nEnter a ISBN number: ");
    scanf("%d -%d -%d -%d -%d",&gs1 ,&groupId ,&publisherCode ,&itemNumber ,&checkDigit);
    printf("\nGS1 prefix: %d\nGroup identifier: %d\nPublisher code: %d\nItem number: %d\nCheck digit: %d\n\n",gs1 ,groupId ,publisherCode ,itemNumber ,checkDigit); //3

    printf("Enter phone number [(xxx) xxx-xxxx]: ");
    scanf(" (%d )%d -%d",&phoneNumberOne ,&phoneNumberTwo ,&phoneNumberThree);
    printf("You entered %d.%d.%d",phoneNumberOne ,phoneNumberTwo ,phoneNumberThree); //4

    printf("\n\nEnter the numbers from 1 to 16 in any order:\n");
    scanf("%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d",&x1 ,&x2 ,&x3 ,&x4 ,&x5 ,&x6 ,&x7 ,&x8 ,&x9 ,&x10 ,&x11 ,&x12 ,&x13 ,&x14 ,&x15 ,&x16);
    printf("\n%d\t%d\t%d\t%d\n%d\t%d\t%d\t%d\n%d\t%d\t%d\t%d\n%d\t%d\t%d\t%d\n\n",x1 ,x2 ,x3 ,x4 ,x5 ,x6 ,x7 ,x8 ,x9 ,x10 ,x11 ,x12 ,x13 ,x14 ,x15 ,x16);
    
    printf("Row sums: %d %d %d %d\n"
    ,x1+x2+x3+x4
    ,x5+x6+x7+x8
    ,x9+x10+x11+x12
    ,x13+x14+x15+x16);
    
    printf("Column sums: %d %d %d %d\n"
    ,x1+x5+x9+x13
    ,x2+x6+x10+x14
    ,x3+x7+x1+x15
    ,x4+x8+x12+x16);
    
    printf("Diagonal sums: %d %d\n"
    ,x1+x6+x11+x16
    ,x4+x7+x10+x13); //5

    printf("Enter two fractions seperated by a + sign: ");
    scanf("%d /%d +%d /%d",&num1 ,&denom1 ,&num2 ,&denom2);

    resultNum = num1 * denom2 + num2 * denom1;

    resultDenom = denom1 * denom2;

    printf("\nThe sum is : %d/%d\n",resultNum ,resultDenom); //6
    
    return 0;

}