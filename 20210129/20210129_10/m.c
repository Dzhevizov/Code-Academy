#include <stdio.h>
#include "f.h"

int main(void){
    unsigned int x,y;
    float z;
    printf("Enter first positive integer\n");
    scanf("%d", &x);
    printf("Enter second positive integer\n");
    scanf("%d", &y);
    printf("Enter a real number\n");
    scanf("%f", &z);

    printf("LCM of %d and %d is %d\n", x, y, lcm(x,y));
   
    printf("Abs value of %d is %f\n", x, absValue(x));
    printf("Abs value of %f is %f\n", z, absValue(z));
    
    float root = 0;
    if (z < 1){
        printf("-1\n");
        z = absValue(z);
    }
    root = sqr(z);
    printf("The square root of %f is %f\n", z, sqr (z));
    return 0;
}
