#include <stdio.h>

int main(void){
    int i, j, k,
    i1, i2, i3, i4, i5, x1, x2, x3, x4, x5,
    firstSum, secondSum, total,
    a, b, c, d, e;

    i = 5; j =3;
    printf("%d %d\n",i / j, i % j ); // i predict 1 2
    i = 2; j = 3;
    printf("%d\n",(i + 10) % j ); // i predict 0
    i = 7; j = 8; k = 9;
    printf("%d\n",(i + 10) % k / j ); // 17 % 9 / 8 = (8) / 8 - 1 - i predict 1
    i = 1; j = 2; k = 3;
    printf("%d\n",(i + 5) % (j + 2) / k ); // i predict 0
    // 1

    i = 10; j = 5;
    printf("%d\n",(-i)/j );
    printf("%d\n",-(i / j) ); // They are the same because -10 / 5 = -2 so 10 / 5 = 2 then becomes -2 because the "-" operand makes the result a negative.
    // 2

    // 8 / 5 = 1
    // -8 / 5 = -1
    // 8 / -5 = -1
    // -8 / -5 = 1
    printf("\n\n%d\n",8 / 5 );
    printf("%d\n",-8 / 5 );
    printf("%d\n",8 / -5 );
    printf("%d\n",-8 / -5 );
    // 4 (Idk how to compile in c89)

    // 8 % 5 = 3
    // -8 % 5 = -3
    // 8 % -5 = -3 // this became 3
    // -8 % -5 = 3 // this became -3
    printf("\n\n%d\n",8 % 5 );
    printf("%d\n",-8 % 5 );
    printf("%d\n",8 % -5 );
    printf("%d\n",-8 % -5 );    
    // 6 cant do in c89

    printf("Enter the 1st single digit of the UPC code: ");
    scanf("%1d",&i);
    printf("Enter the 1st group of five digits: ");
    scanf("%1d%1d%1d%1d%1d",&i1 ,&i2 ,&i3 ,&i4 ,&i5);
    printf("Enter the 2nd group of five digits: ");
    scanf("%1d%1d%1d%1d%1d",&x1 ,&x2 ,&x3 ,&x4 ,&x5);

    firstSum = i + i2 + i4 + x1 + x3 + x5;
    secondSum = i1 + i3 + i5 + x2 + x4;

    total = 10 - ((((firstSum * 3) + secondSum)) % 10); // this way doesnt work because calculating the remainder of total is now different for example you might have 44 % 10 = 4, 10 - 6 = 4
                                                        // how ever the correct way is 44 - 1 = 43 , 43 % 10 = 3, 9 - 3 = 6 giving the correct check digit.

    printf("Your check digit is: %d\n",total);
    // 7

    //(10 - (total % 10)) % 10
    total = (10 - (total % 10)) % 10;
    printf("\nYour check digit is: %d\n",total);
    // No this way doesn't work because for example 44 % 10 = 4, 10 - 4 = 6, 6 % 10 = 0
    // 8

    i = 7; j = 8;
    i *= j + 1;
    printf("\n%d %d\n",i ,j); // i predict 63 8
    i = j; k = 1;
    printf("%d %d %d\n",i ,j ,k); // i predict 8 8 1
    i = 1; j = 2; k = 3;
    i *= j *= k;
    printf("%d %d %d\n",i ,j ,k); // i predict 6 6 3
    // 9

    i = 6;
    j = i += i;
    printf("\n%d %d\n",i ,j); // i predict 12 6 // this became 12 12 i dumb
    i = 5;
    j = (i -= 2) + 1;
    printf("%d %d\n",i ,j); // i predict 3 4
    i = 7;
    j = 6 + (i = 2.5);
    printf("%d %d\n",i ,j); // i predict 2 8
    i = 2; j = 8;
    j = (i = 6) + (j = 3);
    printf("%d %d\n",i ,j); // i predict 6 9
    // 10

    i = 1;
    printf("\n%d ",i++ - 1);
    printf("%d\n",i); // i predict 0 2
    i = 10; j = 5;
    printf("%d ",i++ - ++j);
    printf("%d %d\n",i ,j); // i predict 4 11 6
    i = 7; j = 8;
    printf("%d ",i++ - --j);
    printf("%d %d\n",i ,j); // i predict 0 8 7
    i = 3; j = 4; k =5;
    printf("%d ",i++ - j++ + --k);
    printf("%d %d %d\n",i ,j ,k); // i predict 3 4 5 4
    // 11

    i = 5;
    j = ++i * 3 - 2;
    printf("\n%d %d\n",i ,j); // i predict 6 6 or 6 16 (it was 6 16)
    i = 5;
    j = 3 - 2 * i++;
    printf("%d %d\n",i ,j); //i predict 6 -7
    i = 7;
    j = 3 * i-- + 2;
    printf("%d %d\n",i ,j); // i predict 6 23
    i = 7;
    j = 3 + --i * 2;
    printf("%d %d\n",i ,j); // i predict 6 15
    //12

    // i think i++ is the same as i += 1 because they both see i and do nothing then assign + 1 to i , where as ++i just increments i without reading i.
    // 13

    // a * b - c * d + e would be seen as ((a * b) - (c * d)) + e
    // a / b % c / d would be seen as ((a / b) % c) / d
    // - a - b + c - + d would be seen as (((-a) - b) + c) - (+d)
    // a * - b / c - d would be seen as ((a * (-b)) / c) - d
    a = 1; b = 2; c = 3; d = 4; e = 5;
    printf("\none: %d\n",a * b - c * d + e); // -5
    printf("\ntwo: %d\n",a / b % c / d); // 0
    printf("\nthree: %d\n", - a - b + c - + d); // -4
    printf("\nfour: %d\n",a * - b / c - d); // -4
    // 14

    

    return 0;
}