/*Напишете функцията strncpy(s, t, n), която копира най -
много n символа от t в s .*/

#include <stdio.h>
#include <string.h>

int our_strncpy(char *s, char *t, size_t n){
    for (int i = 0 ;i < n;i++){
        s[i] = t[i];
        s[n] = '\0';
    }
}

int main(){
    char s[] = "Hello world";
    char t[] = "purple";
    size_t n = 3;
    our_strncpy(s,t,n);
    printf("%s\n", s);
    printf("%s\n", t);
    return 0;
}
