#include <stdio.h>

int main(void){
    int height, length, width, volume;
    float profit, loss;

    height = 8;
    length = 12;
    width = 10;
    volume = height * length * width;
    profit = 10123.612f;

    printf("Volume is: %d.\n", volume);
    return 0;
}