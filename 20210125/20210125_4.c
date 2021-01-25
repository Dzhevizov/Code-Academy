#include <stdio.h>
int main(void){
    int flag = 1;
    char c;
    while ((c = getchar()) != EOF){
        if (c == ' '){
            if (flag == 1 && c == ' '){
                continue;
            }
            flag = 1;
        }
        else{
            flag = 0;
        }
        putchar(c);
    }
    return 0;
}
