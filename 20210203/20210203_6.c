/*Напишете функция с прототип my_swap(а, b), която разменя
стойностите на две цели числа без да използва спомагателна променлива
(например: *a = *a + *b; *b = *a - *b; *a = *a - *b).*/

#include <stdio.h>

void my_swap(int* a, int* b){
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
}

int main(){
    int a = 10;
    int b = 8;
    my_swap(&a, &b);
    printf("a = %d\n", a);
    printf("b = %d\n", b);
    return 0;
}
