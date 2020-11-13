#include <stdio.h>

int main(void){
    int num1, denom1, num2, denom2, resultNum, resultDenom;
    
    printf("Enter 1st fraction: ");
    scanf("%d/%d",&num1 ,&denom1);

    printf("Enter 2nd fraction: ");
    scanf("%d/%d",&num2 ,&denom2);

    resultNum = num1 * denom2 + num2 * denom1;

    resultDenom = denom1 * denom2;

    printf("\nThe sum is : %d/%d\n",resultNum ,resultDenom);

    return 0;
}