#include <stdio.h>
#include "f.h"

int main(void){
    int x,y,z;
    printf("Enter first integer:\n");
    scanf("%d", &x);
    printf("Enter second integer:\n");
    scanf("%d", &y);
    printf("Enter third integer:\n");
    scanf("%d", &z);
    printf("X + Y = %d\n", add(x,y));
    printf("The increased value of Z is: %d\n", incr(z));
    return 0;
}
