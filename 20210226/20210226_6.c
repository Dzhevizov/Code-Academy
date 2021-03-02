/*Напишете структура с потребителски тип key_t, която
съдържа символен низ и число.*/

#include <stdio.h>

typedef struct {char s[10]; int x} key_t;

int main(){
    key_t test1 = {"pesho", 20};
    printf("%s\n", test1.s);
    printf("%d\n", test1.x);
    return 0;
}



