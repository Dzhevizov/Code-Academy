/*Какво е грешното на този код?*/

#include <stdio.h>

void my_strcpy(char *s, char *t){
for(; *t; s++, t++)
*s = *t;
}
/*Тук липсва условие, което да прекъсне цикъла
в момента, в който се копира последния елемент
на низа t в низа s.*/

int main(){
    char s[] = "Hello world";
    char t[] = "test";
    my_strcpy(s,t);
    printf("%s\n", s);
    printf("%s\n", t);
    return 0;
}
