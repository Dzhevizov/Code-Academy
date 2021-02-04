/*Напишете функция void reverse(char s[]), която обръща низа char s[
]. Използвайте for цикъл с два аргумента, разделени със запетая
i = 0, j = strlen(s) – 1; i < j; i++, j-- , за да обърнете стринга.*/

#include <stdio.h>
#include <string.h>

void  reverse();
char s[1000];
int i,j,c;
int main(void){
        reverse(s);
    return 0;
}
void reverse(char s[]){
        c = gets (s);
        for (i=0,j=strlen(s)-1;i<j;i++,j--){
            c = s[i];
            s[i] = s[j];
            s[j] = c;
        }
        printf("%s\n", s);
}
