#include <stdio.h>

int main(void){
    float y, x = 10.6969;
    int i, j, num1, denom1, num2, denom2, resultNum, resultDenom;
    
    printf("%6d,%4d\n",86, 1040);
    printf("%12.5e\n",30.253);
    printf("%.4f\n", 83.162);
    printf("%-6.2g\n",.0000009979); //1

    printf("\n%-8.1e\n",x);
    printf("%10.6e\n",x);
    printf("%-8.3f\n",x);
    printf("%6.0f\n",x); //2

    //"%d" versus " %d" = Equivalent
    //"%d-%d-%d" versus "%d -%d -%d" = Not equivalent
    // 1st example will look integer then '-' if input looks like this " -" it will terminate however second example will have the whitespace characters removed alloweing "    -" for example.
    //"%f" versus "%f " = Not equivalent
    //first eexample will look  for a float and then terminate, second will look for a float then hang until space is entered.
    //"%f,%f" versus "%f, %f" = Equivalent // 3

    printf("Enter numbers (Part 4): ");
    scanf("%d%f%d",&i ,&x, &j);
    // 10.3 5 6
    // i predict 10 5.0 6
    printf("\n%d\t%f\t%d\n\n",i ,x ,j);
    // 10 .030000 5 was result
    // i think it tried to look for integer found 10 and saw decimal place so went back then the %f was looking for a float and saw .3 so it became .300000 then %d looked for an integer and found 6
    // 4

    printf("Enter numbers (Part 5): ");
    scanf("%f%d%f",&x ,&i, &y);
    // 12.3 45.6 789
    // i predict that x = 12.3, i = 45 and y = 0.60000
    printf("%f\t%d\t%f\n",x ,i ,y);
    // x was 12.300000 i was right anyway ez
    //5

    printf("Enter 1st fraction: ");
    scanf("%d / %d",&num1 ,&denom1);

    printf("Enter 2nd fraction: ");
    scanf("%d / %d",&num2 ,&denom2);

    resultNum = num1 * denom2 + num2 * denom1;

    resultDenom = denom1 * denom2;

    printf("\nThe sum is : %d/%d\n",resultNum ,resultDenom); //6


    return 0;
}