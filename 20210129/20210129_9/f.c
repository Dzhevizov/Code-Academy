#include <stdio.h>
#include <math.h>

float discriminant (float a,float b, float c){
    float D = (b * b) - (4 * a * c);
    return D;
}
float squareDiscriminant(float a, float b, float c){
    float sqrtD = sqrt(discriminant(a,b,c));
    return sqrtD;
}
void rootsOfEquation(float a, float b, float c){
    float x1, x2;
    x1 = (-b + squareDiscriminant(a,b,c)) / (2 * a);
    printf("x1 = %.6f\n", x1);
    x2 = (-b - squareDiscriminant(a,b,c)) / (2 * a);
    printf("x2 = %.6f\n", x2);
    return;
}
