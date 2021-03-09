/*Създайте test.txt файл в избрана от вас директория. Сложете
някакви данни в него на латиница- име, поздрав, брой. Отворете
файла за редактиране. Внимавайте за мястото, къде поставяте
файла. Трябва да е там, където е сорс файлът.
FILE *fopen(const char *restrict name, const char *restrict
mode);*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE *pfile = NULL;
    char *filename = "test.txt";
    pfile = fopen(filename, "wt");
    if (pfile == NULL)
        printf("Failed to open %s.\n", filename);

    int ret;
    ret = rename("test.txt", "copy.txt");
    if (ret == 0)
        printf("File renamed successfully.");
    else
        printf("Failed to rename file.");
    fclose(pfile);
    return 0;
}
