#include <stdio.h>

int main(void){
    int height, length, width, volume;
    float profit, loss, net;

    height = 8;
    length = 12;
    width = 10;
    volume = height * length * width;
    profit = 10123.61f;
    loss = 2131.51f;
    net = profit - loss;
    
    printf("Volume is: %d.\nNet profit = %f", volume, net);
    return 0;
}