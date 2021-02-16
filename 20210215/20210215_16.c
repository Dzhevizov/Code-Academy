/*Направете същото, както в задача 15, но използвайки
готовата функция strcpy. Потърсете онлайн как работи
тази функция и какви аргументи приема.*/


#include <stdio.h>
#include <string.h>


int main(){
    char string1[] = "A string to be copied";
    char string2[] = {0};
    char string3[] = "I am very good in strings coping";
    char string4[] = {0};

    strcpy(string2, string1);
    printf("string2: %s\n", string2);
    strcpy(string4, string3);
    printf("string4: %s\n", string4);

    return 0;
}
