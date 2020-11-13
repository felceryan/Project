#include <stdio.h>

int main(void){
    int i, j, k;

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
    printf("%d\n",-(i / j) ); // They are the same because -10 / 5 = -2 so 10 / 5 = 2 then becomes -2 because the - operand makes the result a negative.
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

    

    return 0;
}