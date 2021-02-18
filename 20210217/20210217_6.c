/*Пребройте буквите ‚а‘ в стринг (може да е число и масив).
Пример: "This is a string to test my idea for search in a char and ....";*/

#include <stdio.h>

int main(){
    char a[] = "This is a string to test my idea for search in a char and ....";
    char *p = a;
    int count = 0;

    while (*p != '\0'){
        if (*p == 'a'){
            count++;
        }
        p++;
    }

    printf("In this string there are %d letters 'a'\n", count);
    return 0;
}
