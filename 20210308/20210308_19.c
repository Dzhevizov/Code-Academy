/* Напишете стандартната програма за Linux cat , която приема като
аргументи от командния ред имена на файлове и изкарва съдържанието
им на стандартния изход. Ако на програмата не са подадени никакви
аргументи, то тя да изкара съдържанието подадено от стандартния вход
на стандартния изход.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]){
    FILE *fpInput = NULL;
    FILE *fpFile = NULL;
    if (argc < 3){
        printf("\nUsage:\n > %s input.txt file.txt\n\n",
               argv[0]);
    }
    else{
        fpInput = fopen(argv[1], "r");
        fpFile = fopen(argv[2], "r");
    }
    if (NULL != fpInput && NULL != fpFile){
        for (;;){
            char c = 0;
            fscanf(fpInput, "%c", &c);
            if (feof(fpInput))
                break;
            printf("%c", c);
        }
        for (;;){
            char c = 0;
            fscanf(fpFile, "%c", &c);
            if (feof(fpFile))
                break;
            printf("%c", c);
        }
        
    }
    else if (argc >= 3){
        fprintf(stderr, "\nFailed to open IN/OUT files\n");
    }
    if (NULL != fpInput)
        fclose(fpInput);
    if (NULL != fpFile)
        fclose(fpFile);
    return 0;
}
