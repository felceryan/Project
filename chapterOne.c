#include <stdio.h>

int main(void){
    float radius, volume;

    printf("        *\n       *\n      *\n*    *\n *  *\n   *"); // 1.

    printf("\nEnter the radius of the sphere: ");
    scanf("%f",&radius);
    volume = (4.0f/3.0f) * 3.14159265359 * (radius * radius * radius);
    printf("The volume of a sphere with a radius of %.2f = %f\n",radius,volume); //2

    return 0;
}