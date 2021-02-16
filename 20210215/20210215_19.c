/*Дефинирайте стринг: „Baba, kaka, mama” заменете „а“
със „о“*/

#include <stdio.h>

int main(){
    char a[] = "Baba, kaka, mama";
    char *p;
    p = a;

    for (;*p != '\0'; p++){
        if (*p == 'a'){
            *p = 'o';
        }
    }

    printf("%s\n", a);
    return 0;
}
