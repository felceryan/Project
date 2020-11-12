#include <stdio.h>

int main(void){
    int weight, volume, height, width, length;
    height = 12;
    width = 16;
    length = 16;
    volume = height * width * length;
    weight = (165 + volume) / 166;

    printf("Dimensions = %d x %d x %d.\n",height, width, length);
    printf("Volume (cubic inches) = %d.\n",volume);
    printf("Dimensional weight (pounds) = %d.\n",weight);


    return 0;
}