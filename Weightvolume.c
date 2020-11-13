#include <stdio.h>
#define INCHES_PER_POUND 166

int main(void){
    
    int height, width, length, volume, weight;
    
    printf("What is the height: ");
    scanf("%d", &height);
    printf("What is the width: ");
    scanf("%d", &width);
    printf("What is the length: ");
    scanf("%d", &length);

    volume = height * width * length;
    printf("The volume is: %d\n",volume);

    weight = ((INCHES_PER_POUND - 1) + volume) / INCHES_PER_POUND;
    printf("Weight (pounds): %d", weight);


    return 0;
}