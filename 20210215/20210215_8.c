/*Дефинирайте и инициализирайте променлива и пойнтер
към нея. Отпечатайте адреса на пойнтера с %p с printf.*/

#include <stdio.h>

int main(){
    int a = 10;
    int *pa = &a;

    printf("Adress of pa: %p\n", &pa);
    printf("Adress of a: %p\n", pa);
    printf("Value of pa: %d\n", *pa);
    return 0;
}
