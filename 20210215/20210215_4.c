/*Дефинирайте пойнтер и опитайте да отпечатате стойността
му на конзолата (%р) с printf.
Какво се визуализира?*/

#include <stdio.h>

int main(){
    int i = 10;
    int *pi = &i;

    printf("Adress of pi: %p\n", &pi);
    printf("Adress of i: %p\n", pi);
    printf("Value of pi: %d\n", *pi);
    return 0;
}
