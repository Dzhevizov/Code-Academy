/*Напишете стринг в текстов файл.
int fputs (const char *str, FILE *pfile);
Първият параметър е указател към стринга, който искаме да
запишем, вторият параметър е указател към файла, в който ще
пишем.
Функцията ще записва символи от стринга догато достигне
терминиращ символ \0, но не го пише в новия файл.*/

#include <stdio.h>

int main(){
    FILE *fp = NULL;
    fp = fopen("test.txt", "wt+");
    if (fp != NULL)
        fputs("my first string\n", fp);
    fputs("my second string\n", fp);
    fclose(fp);
    return 0;
}
