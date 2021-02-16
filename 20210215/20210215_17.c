/* Направете същото, както в задача 16., но преди да
копирате, нулирайте стойността на стринговете, в
които ще копирате, използвайки готовата функция
memset. Потърсете онлайн как работи тази функция и
какви аргументи приема.*/

#include <stdio.h>
#include <string.h>

int main(){
    char string1[] = "A string to be copied";
    char string2[] = "place for string 1";
    char string3[] = "I am very good in strings coping";
    char string4[] = "place for string 3";
    char* p2;
    char* p4;
    p2 = string2;
    p4 = string4;

    printf("string2: %s\n", string2);
    printf("string4: %s\n", string4);
    
    memset(p2,'\0',1);
    printf("string2: %s\n", string2);
    memset(p4,'\0',1);
    printf("string4: %s\n", string4);

    strcpy(string2, string1);
    printf("string2: %s\n", string2);
    strcpy(string4, string3);
    printf("string4: %s\n", string4);

    return 0;
}
