#include <stdio.h>

#define FREEZING_POINT 32.0f
#define SCALE_FACTOR (5.0f / 9.0f)

int main(void){
    float celsius, fahrenheit;

    printf("Enter temperature in fahrenheit: ");
    scanf("%f", &fahrenheit);

    celsius = (fahrenheit - FREEZING_POINT) * SCALE_FACTOR;
    printf("Your temperature in celsius is: %.1f\n", celsius);
    
    

    return 0;
}