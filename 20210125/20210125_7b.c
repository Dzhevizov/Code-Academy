#include <stdio.h>
#include <string.h>
int main(void){
    char c;
    int i = 0;
    char s[1000] = "0";
    while ((c = getchar()) != EOF){
        s[i] = c;
        i++;
        if (i>80 && c == '\n'){
            goto print;
        }
        if (c == '\n'){
            i=0;
        }
    }
    print:
    printf("%s\n", s);
    return 0;
}
