#include <stdio.h>
int main(void){
    char c;
    int nl = 0;
    while ((c = getchar()) != EOF){
        if (c == '\n'){
            ++nl;
        }    
    }
    printf("%d\n", nl);
    return 0;
}
