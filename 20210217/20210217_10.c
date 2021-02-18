/*Да намерим простите числа до 1000 и да ги сложим в масив.
Да напишем функция, която да ни казва дали дадено число от 0 - до 1000
е просто.*/

#include <stdio.h>
#include <math.h>
#include <stdbool.h>

int isPrime(int n){
    
    if (n <= 1)
        return 0;
 
    for (int i = 2; i < n; i++)
        if (n % i == 0)
            return 0;
 
    return 1;
}
int (*fun_ptr)() = isPrime;

int main(){

    printf("prime_nums from 0 to 1000 are: ");
    
    for (int n = 0; n <= 1000; n++){
        if (fun_ptr(n) == 1){
            printf("%d,", n);
        }
    }

    return 0;
}
