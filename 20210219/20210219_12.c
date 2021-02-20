/*Напишете функция, която изчислява разстоянието между две
точки в равнината. Нека функцията да приема два параметъра, които са
структури ТPoint с два члена X и Y координати.*/

#include <stdio.h>
#include <math.h>

struct point{
    double x;
    double y;
};

struct point dist1(struct point a, struct point b){
        struct point result;
        result.x = b.x - a.x;
        result.y = b.y - a.y;
        return result;
}


int main(){
    struct point a = {2, 3};
    struct point b = {4, 7};
    struct point c = dist1(a,b);

    int x = c.x;
    int y = c.y;

    double distance = sqrt(x*x + y*y);

    printf("Distance between these points is: %f", distance);
    return 0;
}
