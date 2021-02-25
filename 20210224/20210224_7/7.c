/*Напишете заглавен файл с декларации на функции и
сложете гардове. Този начин намалява времето за компилиране на
големи проекти.*/

#include "7.h"
int main(void){
    f();
    #if !defined(fun1)
    #define fun1 7.h
    printf("fun1 = 2");
    #endif

    #if !defined(fun2)
    #define fun2 7.h
    printf("fun2 = 2");
    #endif
    return 0;
}
