#include <stdio.h>

float areaOfTriangle(float,float);
float areaOfRectangle(float,float);

int main(void){
    float x,y;
    printf("Enter the length of side X:\n");
    scanf("%f", &x);
    printf("Enter the length of side Y:\n");
    scanf("%f", &y);
    printf("The area of the triangle is: %f\n", areaOfTriangle(x,y));
    printf("The area of the rectangle is: %f\n", areaOfRectangle(x,y));
    return 0;
}
float areaOfTriangle(float a,float b){
    return a * b / 2;
}
float areaOfRectangle(float a,float b){
    float area = areaOfTriangle(a,b) * 2;
    return area;
}
