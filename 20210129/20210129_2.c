#include <stdio.h>

const float g_pi = 3.14;
float areaCircle(float r){
    return g_pi * r * r;
}
float area();

int main(void){
    printf("The area of this circle is: %f\n", area());
    return 0;
}
float area(){
    float r1 = 0;
    printf("Enter a radius of the circle:\n");
    scanf("%f", &r1);
    float rez = areaCircle(r1);
    return rez;
}
