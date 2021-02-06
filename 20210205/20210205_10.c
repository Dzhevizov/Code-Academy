/*Напишете функцията strncat(s, t, n), която добавя
(конкатенира) n символа от стринга t в края на стринга s.*/

#include <stdio.h>

int i,j = 0;
void our_strncat(char *s, char *t, size_t n){
    
   for ( ; s[i] != '\0'; i++);
   for ( int x = 0; x < n; x++){
       s[i++] = t[j++];
        t[n] = '\0';
   }
    
}

int main(){
    char s[100] = "Hello ";
    printf("%s\n", s);
    char t[10] = "world";
    size_t n = 4;
    our_strncat(s,t,n); 
    printf("%s\n", s);
    return 0;
}
