#include <stdio.h>

int main(void){
    float radius, volume, amount;
    int xValue;

    printf("        *\n       *\n      *\n*    *\n *  *\n   *"); // 1.

    printf("\nEnter the radius of the sphere: ");
    scanf("%f",&radius); //3
    volume = (4.0f/3.0f) * 3.14159265359 * (radius * radius * radius);
    printf("The volume of a sphere with a radius of %.2f = %f\n",radius,volume); //2

    printf("Enter an amount of money: ");
    scanf("%f", &amount);

    printf("Your amount with 5 perecent tax added is: $%.2f\n",amount * 1.05); //4

    printf("Enter a value for x : ");
    scanf("%d", &xValue);

    printf("3x^5 + 2x^4 - 5x^3 - x^2 + 7x - 6 = %d\n",(
    (3 * (xValue * xValue * xValue * xValue * xValue)) 
    + (2 * (xValue * xValue * xValue * xValue)) 
    - (5 * (xValue * xValue * xValue)) 
    - (xValue * xValue) 
    + (7 * xValue) - 6) );

    return 0;
}