/*Напишете функция, която изчислява произведението на
числата от 1 до 30.*/

#include <stdio.h>

long long fun(void){
    long long b = 1;
    for (int a=1;a<=30;a++){
        b *= a;
    }
    return b;
}

int main(){
    long long rez = fun();
    printf("%llu\n", rez);
    return 0;
}
