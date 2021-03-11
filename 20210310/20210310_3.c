/*Напишете програма за отпечатване на файловете добавени след а.ехе ,
като започнете всеки нов на нова страница със заглавие и номере на всяка
страница за всеки файл.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define standart_page 42

int main(int argc, char const *argv[])
{
    FILE *fp1, *fp2;

    int c;

    if (argc < 2)
    {
        printf("Usage: %s\n", argv[0]);
        exit(1);
    }

    for (int i = 1; i < argc; i++)
    {
        fp1 = fopen(argv[i], "r");
        if ((fp1 = fopen(argv[i], "r")) == NULL)
        {
            printf("Can't open file: %s\n", argv[i]);
            exit(1);
        }
        fp2 = fopen(argv[i], "a");
        if ((fp2 = fopen(argv[i], "a")) == NULL)
        {
            printf("Can't open file: %s\n", argv[i]);
            exit(1);
        }
        int page = 1;
        int line = 0;
        while ((c = fgetc(fp1)) != EOF){
            if (c == '\n'){
                line++;
            }
            if (line == standart_page){
                fprintf(fp2, "\npage %d\n", page);
                line = 0;
                page++;
            }
        }
        if ((c = fgetc(fp1)) == EOF){
            fprintf(fp2, "\npage %d\n", page);
        }
    }
    fclose(fp1);
    fclose(fp2);
    return 0;
}
