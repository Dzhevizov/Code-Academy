/*Дефинирайте и инициализирайте три пойнтера, тип int, тип
float, тип char.*/

#include <stdio.h>

int main(){

    int a = 15;
    float b = 2.5;
    char c = 'd';

    int *pi = &a;
    float *pf = &b;
    char *pc = &c;

    printf("Adress of pi: %p\n", &pi);
    printf("Adress of a: %p\n", pi);
    printf("Value of pi: %d\n", *pi);

    printf("Adress of pf: %p\n", &pf);
    printf("Adress of b: %p\n", pf);
    printf("Value of pf: %f\n", *pf);
    
    printf("Adress of pc: %p\n", &pc);
    printf("Adress of c: %p\n", pc);
    printf("Value of pc: %c\n", *pc);
}
