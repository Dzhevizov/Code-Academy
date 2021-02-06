/*Напишете финкцията int our_strcmp(char *s, char *t), която
сравнява низовете s и t и връща нула 0 ако двата низа са равни. Ако
елемента в който се различават s[i] е по-малък от t[i] връща стойност 
по-малка от нула < 0. Ako s[i] е по-голям от t[i] връща стойност по-голяма от
нула > 0*/

#include <stdio.h>

int our_strcmp(char *s, char *t){
    for (int i = 0; *s,*t; i++){
        if (s[i] == 0 && t[i] == 0){
            return 0;
        }
        else if (s[i] == 0 && t[i] > 0){
            return s[i] - t[i];
        }
        else if (s[i] > 0 && t[i] == 0){
            return s[i] - t[i];
        }
    }
}

int main(){
    char s1[] = "hello";
    char t1[] = "pesho";
    printf("%d\n", our_strcmp(s1,t1));
    char s2[] = "blue";
    char t2[] = "yellow";
    printf("%d\n", our_strcmp(s2,t2));
    char s3[] = "begin";
    char t3[] = "end";
    printf("%d\n", our_strcmp(s3,t3));
    return 0;
}
