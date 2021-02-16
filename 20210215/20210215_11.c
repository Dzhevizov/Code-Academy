/*Напишете програма, която умножава 2 числа, като
използва пойнтер-и.
Продължение: Опитайте да умножите 2 променливи от
различен тип, използвайки пойнтери.*/

#include <stdio.h>

int main(){
    int a = 5;
    int b = 10;
    float c = 2.5;
    int res1 = 0;
    float res2 = 0;
    int *pa = &a;
    int *pb = &b;
    float *pc = &c;

    res1 = *pa * *pb;
    printf("res1 = %d\n", res1);
    res2 = *pa * *pc;
    printf("res2 = %f\n", res2);
    return 0;
}
