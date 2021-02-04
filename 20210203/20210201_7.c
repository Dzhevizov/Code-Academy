/*Напишете функция, която прави същото, както в задача
6, но е рекурсивна.*/

#include <stdio.h>

long long fun(int a){
    return (a < 2) ? 1 : a * fun(a-1);
}

int main(){
    long long rez = fun(30);
    printf("%llu\n", rez);
    return 0;
}
