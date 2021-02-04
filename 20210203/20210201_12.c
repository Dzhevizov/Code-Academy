/*напишете функцията int any(char s1[], char s2[]), която
връща първата позиция в низа s1, където се появява някой от
символите в низа s2 (Стандартната библиотечна функция strpbrk
извършва тази функция)*/

#include <stdio.h>
#include <string.h>

int any(char s1[], char s2[]){
    char *ret;
    ret = strpbrk(s1,s2);
    if (ret != 0){
        printf("First matching character: %c\n", *ret);
    }
    else {
        printf("Character not found");
    }
}

int main(){
    char s1[20] = "Hello world";
    char s2[10] = "blue";
    any(s1,s2);
    return 0;
}
