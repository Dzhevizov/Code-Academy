#include <stdio.h>

const float g_pi = 3.14;
float areaCircle(float r){
    return g_pi * r * r;
}

int main(void){
    float r1 = 2.5;
    areaCircle(r1);
    printf("The area of this circle is: %f\n", areaCircle(r1));
    return 0;
}
