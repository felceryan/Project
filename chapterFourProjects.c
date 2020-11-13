#include <stdio.h>
int main(void){
    int x, y, z, a;
    
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
    printf("The reversal is : %d%d%d\n",z, a, y);



    return 0;
}