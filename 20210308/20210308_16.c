/*Напишете програма, която премахва от файл номер на ред и
премахва този ред от файла. (Hint: Не трийте от оригиналния файл, а
запишете съдържанието на файла без конкретния ред в друг файл).*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    FILE *fpIn = NULL;
    FILE *fpOut = NULL;

    fpIn = fopen("input.txt", "rt+");
    fpOut = fopen("output.txt", "wt+");

    int count = 1;

    if (NULL != fpIn && NULL != fpOut){

        for (;;){
            char c = 0;
            fscanf(fpIn, "%c", &c);
            if (feof(fpIn))
                break;
            if (c == '\n')
                count++;
            if (count != 3){
                fprintf(fpOut, "%c", c);
            }
        }
    }

    if (NULL != fpIn)
        fclose(fpIn);
    if (NULL != fpOut)
        fclose(fpOut);
    return 0;
}
