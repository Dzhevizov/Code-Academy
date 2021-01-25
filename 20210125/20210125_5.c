#include <stdio.h>

int main(void){
    char c;
    while ((c = getchar ()) != EOF){
        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
            putchar(c); 
        }
    }
    if (c == EOF){
        printf("?\n");
    }
    return 0;
}
