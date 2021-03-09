/*Отворете и прочетете съдържанието от файл с fscanf.
int fscanf(FILE *stream, const char *format,....)
Има същите формати, както scanf.
Първият аргумент е пойнтер към файла, от който ще четем.
Вторият аргумент е формата- Стрингът може да има следните параметриспейс, неспейс, спецификатори;*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    FILE *fp;
    char str1[10];
    char str2[10];
    int year;
    fp = fopen("test.txt", "w+");
    if (fp == NULL){
        perror("Error opening file");
        return (-1);
    }

    fputs("Hello world 2021", fp);
    rewind(fp);
    fscanf(fp, "%s %s %d", str1, str2, &year);

    printf("%s\n", str1);
    printf("%s\n", str2);
    printf("%d\n", year);

    fclose(fp);
    return 0;
}
