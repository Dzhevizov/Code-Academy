/*Напишете отново функцията void our_strcat(char *s, char *t), която
разгледахме преди малко като използвате указатели, а не
инкрементиращите пrоменливи i, j.*/

#include <stdio.h>

void our_strcat(char *s, char *t){
    for ( ; *s != '\0'; s++);
    for ( ; (*s = *t) != '\0'; s++, t++);
}

int main(){
    char s[100] = "Hello ";
    printf("%s\n", s);
    char t[10] = "world";
    our_strcat(s,t); 
    printf("%s\n", s);
    return 0;
}
