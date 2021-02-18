/*Напишете програма, която да генерира парола с малки букви (i),
специални символи (j), големи букви (k) и цифри (l), ама разбъркано.
Използвайте функции.
Насоки:
1. Въвежда се дължина на паролата, колко символа от нея са малки
букви (a..z), големи букви( A..Z ), колко са цифрите (0..9), колко
специални символи (@#$%!^&*).
2. Използва се генератор на случайни числа за символите и тяхната
позиция*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

    int password[6];
    int *p = password;
    int l = 0;
    int choice = 0;
    int random;
    int random1;
    int random2;
    int random3;
    int random4;
    int random5;

int passGenerator_small(){
    int p1;
    srand((unsigned)time(0));
    random1 = rand() % 26;
    p1 = 97 + random1;  
    return p1;
}

int passGenerator_large(){
    int p2;
    srand((unsigned)time(0));
    random2 = rand() % 26;
    p2 = 65 + random2;  
    return p2;
}

int passGenerator_nums(){
    int p3;
    srand((unsigned)time(0));
    random3 = rand() % 10;
    p3 = 48 + random3;  
    return p3;
}

int passGenerator_spec1(){
    int p4;
    srand((unsigned)time(0));
    random4 = rand() % 15;
    p4 = 33 + random4;  
    return p4;
}

int passGenerator_spec2(){
    int p5;
    srand((unsigned)time(0));
    random5 = rand() % 7;
    p5 = 58 + random5;  
    return p5;
}

int (*fun_ptr[5])() = {passGenerator_small, passGenerator_large, passGenerator_nums, passGenerator_spec1, passGenerator_spec2};

void passGenerator(){
    srand((unsigned)time(0));
    printf("Your password is: ");
    while (l < 6){
            random = rand() % 5;
            printf("%c", fun_ptr[random]);
            l++;
    }
        
}
int main(){

    
    
    while (choice != 1){
        passGenerator();
        
        printf("Press 1 to accept your password\n");
        printf("Press 2 to generate a new password\n");
        scanf("%d", &choice);
        if (choice == 1){
            printf("You have accepted your password.\n");
            break;
        }
        else{
            l = 0;
        }
    }
    return 0;
}
