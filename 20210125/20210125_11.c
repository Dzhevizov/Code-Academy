#include <stdio.h>
#include <string.h>

void  reverse();
char s[1000];
char r[1000];
int i,j,h;
int main(void){
        reverse(s);
    return 0;
}
void reverse(char s[]){
        gets (s);
        while (s[h] != '\0')
        h = strlen(s);
        for (i=0,j=h-1;i<h;i++,j--){
            r[i] = s[j];
        }
        r[i] = '\0';
        printf("%s\n", r);
}
