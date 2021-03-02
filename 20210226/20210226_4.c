/*Дефинирайте функция, която събира
две променливи и приема и изпълнява предефиниран
указател, като стойност.*/

#include <stdio.h>

typedef int (*t_fun)(int,int);

int sum (int a, int b){
    return a + b;
}

int main(){
    int a = 20;
    int b = 13;
    t_fun pSum = NULL;
    pSum = &sum;
    printf("Value of the sum is: %d\n", pSum(a,b));
    return 0;
}
