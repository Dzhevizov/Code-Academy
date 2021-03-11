/*Напишете програма, която сравнява два файла, като отпечатва
първият ред на който се различават и на двата файла.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    FILE *fp1, *fp2;

    int nLine = 1;
    char l1[100], l2[100];

    if (argc < 3)
    {
        printf("Usage: %s <file1.txt> <file2.txt>\n",argv[0]);
        exit(1);
    }

    if ((fp1 = fopen(argv[1],"r")) == NULL){
        printf("Can't open file: %s\n", argv[1]);
        exit(1);
    }

    if ((fp2 = fopen(argv[2],"r")) == NULL){
        printf("Can't open file: %s\n", argv[2]);
        exit(1);
    }

    fgets(l1,100,fp1);
    fgets(l2,100,fp2);

    while ((l1 != 0) && (l2 != 0)){
        if(strcmp(l1,l2) != 0){
            printf("Line number: %d\n", nLine);
            printf("%s", l1);
            printf("%s\n", l2);
            exit(1);
        } else {
            fgets(l1,100,fp1);
            fgets(l2,100,fp2);
            nLine++;    
        }   
    }
    
    return 0;
}
