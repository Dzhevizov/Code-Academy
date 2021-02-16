/*Дефинирайте и инициализирайте променлива „а“.
Пойнтер към пойнтер към променлива.
Дефинирайте и инициализирайте пойнтер към нея.
Дефинирайте и инициализирайте пойнтер към първия пойнтер. Задайте
стойност на втория пойнтер 15.
Колко е стойността на променливата „а“?*/

#include <stdio.h>

int main(){
    int a;
    int *p;
    p = &a;
    int **pi;
    pi = &p;
    **pi = 15;
    printf("Adress of a: %p\n", &a);
    printf("Adress of p: %p\n", &p);
    printf("Adress of pi: %p\n", &pi);
    printf("Value of p: %d\n", *p);
    printf("Value of a: %d\n", a);
    return 0;
}
