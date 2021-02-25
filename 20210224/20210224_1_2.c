/*1. Дефинирайте константи PI, Е, и други с помощта на макроси. Използвайте
ги в кода.
2. Напишете макрос swap(t, x, y), койтo променя местата на двата аргумента
от тип t.*/

#include <stdio.h>
#define PI 3.14
#define E 2.72
#define swap(t, x, y); {t i = x; x = y; y = i;};


int main(){

    int r = 5;
    float area = r * r * PI;
    printf("%f\n", area);
    printf("%f\n", E);

    int x = 2;
    int y = 8;
    printf("x = %d\n", x);
    printf("y = %d\n", y);
    swap(int, x, y);
    printf("x = %d\n", x);
    printf("y = %d\n", y);
    return 0;
}
