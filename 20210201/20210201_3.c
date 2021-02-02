/*Добавете проверка във функцията int atof(char
*s) дали подаденият стринг няма показни позиции преди числото
и, ако има, ги премахнете. Проверете дали числото не е
отрицателно и, ако е така, включете знака в резултата.*/


#include <stdio.h>
#include <ctype.h>

double atof (char *s){
    int i = 0;
    double n = 0;
    double power = 1;
    int sign = 1;
    if (s[0] == '-'){
        sign = -1;
        i++;
    }
    for (n; isdigit(s[i]); i++)
        n = 10 * n + (s[i] - '0');
    if (s[i] == '.')
    i++;
    for (power; isdigit(s[i]);i++){
        n = 10 * n + (s[i] - '0');
        power *= 10; 
    }
    return n / power * sign;
}

int main(void){
    char str[20] = "-123.987";
    double rez = atof(str);
    printf("%f", rez);
    return 0;
}

