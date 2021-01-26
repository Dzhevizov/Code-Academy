#include <stdio.h>
#include <string.h>
int main(void){
    char c;
    int i = 0;
    char s[1000];
    while ((c = getchar()) != EOF){
        s[i] = c;
        i++;
    }
    if (i>80){
    printf("%s\n", s);
    }
    
    return 0;
}
