#include <stdio.h>
#include <ctype.h>

int main(void){
    char c;
    int tolower();
    while ((c = getchar()) != EOF){
        putchar(tolower(c));
    }
    return 0;
}
