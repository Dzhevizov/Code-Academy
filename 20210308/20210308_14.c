/*Напишете програма, която да обръща всички символи в
текстов файл, с главни букви запишете резултата в друг
временен файл. След това преименувайте новия файл
с името на оригиналния файл и изтрийте временното
име. Отпечатайте съдържанието на файл на
стандартния изход с главни букви.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(){

    FILE *fpIn = NULL;
    FILE *fpOut = NULL;

    fpIn = fopen("input.txt", "rt+");
    fpOut = fopen("output.txt", "wt+");

    if (NULL != fpIn && NULL != fpOut){

        for (;;){
            char c = 0;
            fscanf(fpIn, "%c", &c);
            if (feof(fpIn))
                break;
            fprintf(fpOut, "%c", toupper(c));
        }
    }

    int ret;
    ret = rename("output.txt", "INPUT.TXT");
    if (ret == 0){
        printf("File renamed successfully\n");
    }
    else{
        printf("Failed to rename the file\n");
    }
    if (NULL != fpIn)
        fclose(fpIn);
    if (NULL != fpOut)
        fclose(fpOut);
    return 0;
}
