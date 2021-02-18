/*Напишете програма, която да прочете низ от потребителя и да го обърне
в обратен ред.
Например: 'xyz' да стане 'zyx'*/

/*Напишете функция void reverse(char s[]), която обръща низа char s[
]. Използвайте for цикъл с два аргумента, разделени със запетая
i = 0, j = strlen(s) – 1; i < j; i++, j-- , за да обърнете стринга.*/

#include <stdio.h>
#include <string.h>

int i, j, c;
void reverse(char s[]){
    c = s[100];
    for (i = 0, j = strlen(s) - 1; i < j; i++, j--){
        c = s[i];
        s[i] = s[j];
        s[j] = c;
    }
    printf("%s\n", s);
}
void (*fun_ptr)() = reverse;
int main(void){
    char string[100];
    int i = 0;
    printf("Type a random string\n");
    scanf("%s", string);
    fun_ptr(string);
    return 0;
}
