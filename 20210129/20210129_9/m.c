#include <stdio.h>
#include "f.h"

int main (void){
    float a,b,c;
    printf("Enter first parameter of equation (other than zero):\n");
    scanf("%f", &a);
    printf("Enter second parameter of equation:\n");
    scanf("%f", &b);
    printf("Enter third parameter of equation:\n");
    scanf("%f", &c);
    
    float D = discriminant(a,b,c);
    if (D < 0){
        printf("Your equation has no roots.\n");
    }
    else {
        printf("Your equation has roots.\n");
        rootsOfEquation(a,b,c);
    }
    return 0;
}
