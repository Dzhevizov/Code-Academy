/*Направете обединение с елементи тип int, int, char. Дайте
стойност на елементите един по един -7,10 и “c” и изведете
тези стойности на конзолата.
Инициализирайте и трите и изведете стойностите им на
конзолата.*/

#include <stdio.h>

union data{
    int num1;
    int num2;
    char symbol;
};

int main(){
    union data data1;
    data1.num1 = -7;
    printf("num1: %d, num2: %d, char: %c\n", data1.num1, data1.num2, data1.symbol); /*-7, -7, (bell) */
    data1.num2 = 10;
    printf("num1: %d, num2: %d, char: %c\n", data1.num1, data1.num2, data1.symbol); /* 10, 10, new line */
    data1.symbol = 'c';
    printf("num1: %d, num2: %d, char: %c\n", data1.num1, data1.num2, data1.symbol); /* 99, 99, c */

    union data data2 = {-7, 10, 'c'};
    printf("num1: %d, num2: %d, char: %c\n", data2.num1, data2.num2, data2.symbol); /* -7, -7, (bell) */

    return 0;
}
