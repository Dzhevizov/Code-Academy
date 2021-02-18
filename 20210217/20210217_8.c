/*Напишете програма, която да представя Реда на Фибоначи в масив.
Ред на Фибоначи: Всяко число е равно на сумата на двете преди него.
Първите 2 са 0 и 1.*/

#include <stdio.h>

int fibonaci_row(int n){
    if (n == 0){
        return 0;
    }
    else if (n == 1){
        return 1;
    }
    else {
        return fibonaci_row (n-1) + fibonaci_row(n-2);
    }
}

int (*fun_ptr)() = fibonaci_row;

int main(){
    int num = 0;
    int fibo[num];

    printf("How many elements of fibonacci row you want to include in the array?\n");
    scanf("%d", &num);

    printf("fibo[%d] = ", num);
    for (int i = 0; i < num; i++){
        printf("%d,", fun_ptr(i)); 
    }
    return 0;
}
