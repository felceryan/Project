#include <stdio.h>

int main(void){
    float radius, volume;

    printf("        *\n       *\n      *\n*    *\n *  *\n   *"); // 1.

    radius = 10.0f;
    volume = (4.0f/3.0f) * 3.14159265359 * (radius * radius * radius);
    printf("\nThe volume of a sphere with a radius of 10 = %f\n",volume); //2

    return 0;
}