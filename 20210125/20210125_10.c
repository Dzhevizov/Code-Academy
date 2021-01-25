#include <stdio.h>
#include <string.h>

int  reverse();
char s[1000];
int main(void){
    while (*s != EOF){
        reverse();
    }
    return 0;
}
int reverse(){
        gets (s);
        strrev (s);
        printf("%s\n",s);
}
