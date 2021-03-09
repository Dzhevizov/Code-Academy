/*Напишете програма, която чете числа от един текстов файл и ги записва
в друг текстов файл*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    FILE *fpIn = NULL;
    FILE *fpOut = NULL;

    fpIn = fopen("input.txt", "rt+");
    fpOut = fopen("output.txt", "wt+");

    if (NULL != fpIn && NULL != fpOut){

        for (;;){
            int nValue = 0;
            fscanf(fpIn, "%d", &nValue);
            if (feof(fpIn))
                break;
            fprintf(fpOut, "%d ", nValue);
        }
    }

    if (NULL != fpIn)
        fclose(fpIn);
    if (NULL != fpOut)
        fclose(fpOut);
    return 0;
}
