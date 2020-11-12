#include <stdio.h>

int main(void){
    float radius, volume, amount, loan, interest, monthlyPayment, monthlyInterest, balance;
    int x, dollarAmount, tenBill, oneBill, fiveBill, twentyBill;

    printf("        *\n       *\n      *\n*    *\n *  *\n   *"); // 1.

    printf("\nEnter the radius of the sphere: ");
    scanf("%f",&radius); //3
    volume = (4.0f/3.0f) * 3.14159265359 * (radius * radius * radius);
    printf("The volume of a sphere with a radius of %.2f = %f\n",radius,volume); //2

    printf("Enter an amount of money: ");
    scanf("%f", &amount);

    printf("Your amount with 5 perecent tax added is: $%.2f\n",amount * 1.05); //4

    printf("Enter a value for x : ");
    scanf("%d", &x);

    printf("3x^5 + 2x^4 - 5x^3 - x^2 + 7x - 6 = %d\n",((3 * (x * x * x * x * x)) + (2 * (x * x * x * x)) - (5 * (x * x * x)) - (x * x) + (7 * x) - 6) ); //5

    // ((((3x + 2)x - 5)x - 1)x + 7)x - 6

    printf("((((3x + 2)x - 5)x - 1)x + 7)x - 6 = %d\n", ((((3 * x + 2) * x - 5) * x - 1) * x + 7) * x - 6 ); //6

    printf("\nEnter an amount of money: ");
    scanf("%d", &dollarAmount);

    twentyBill = dollarAmount / 20;
    dollarAmount = dollarAmount - (20*twentyBill);
    tenBill = dollarAmount / 10;
    dollarAmount = dollarAmount - (10*tenBill);
    fiveBill = dollarAmount / 5;
    dollarAmount = dollarAmount - (5*fiveBill);
    oneBill = dollarAmount / 1;

    printf("\n$20 = %d\n$10 = %d\n$5 = %d\n$1 = %d\n",twentyBill, tenBill, fiveBill, oneBill); //7

    printf("\nEnter amount of loan: ");
    scanf("%f", &loan);
    printf("Enter interest rate: ");
    scanf("%f", &interest);
    printf("Enter monthly payment: ");
    scanf("%f", &monthlyPayment);

    monthlyInterest = (interest / 100) / 12;

    printf("\nBalance remaining after first payment : %.2f", balance = (loan * (monthlyInterest + 1) - monthlyPayment) );
    printf("\nBalance remaining after second payment : %.2f", balance = (balance * (monthlyInterest + 1) - monthlyPayment) );
    printf("\nBalance remaining after third payment : %.2f", balance = (balance * (monthlyInterest + 1) - monthlyPayment) );

    return 0;
}