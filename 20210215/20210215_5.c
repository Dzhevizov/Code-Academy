/*Дефинирайте и инициализирайте int променлива = 34 и
пойнтер към нея.
Опитайте да ги разместите, като поредност (първо да е
пойнтерът, после променливата).
Можете ли да умножите пойнтер по пойнтер?
При тази декларация колко пойнтера имаме:
int *p, k;*/

#include <stdio.h>

int main(){
    int i = 34;
    int *pi = &i;

    /*int *pa = &a;
    int a = 5;
    Този запис връща грешка: error: 'a' undeclared (first use in this function)*/

    int a = 5;
    int *pa = &a;

    int rez = *pi * *pa;
    printf("%d\n",rez);
    
    /*int rez1 = pi * pa;
    printf("%d\n, rez1");
    Този запис връща грешка:error: invalid operands to binary * (have 'int *' and 'int *')*/

    /*int *p,k;
    Тук имаме декларация на един пойнтер и една променлива от тип инт.
    printf("%d\n", *p);
    printf("%d\n", *k);
    Вторият принтф ни връща грешка: error: invalid type argument of unary '*' (have 'int')*/

    return 0;
}
