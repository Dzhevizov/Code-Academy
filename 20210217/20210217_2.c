/*Добавете към горния код функции за умножение
и деление.*/


#include <stdio.h>
#include <stdlib.h>
int fnPlus(int nA, int nB) { return (nA + nB); }
int fnMinus(int nA, int nB) { return (nA - nB); }
int fnProduct(int nA, int nB) { return (nA * nB);}
int fnDivide(int nA, int nB) {return (nA / nB);}
int main(int argc, char *argv[]){
    int (*pfCalc)(int, int) = NULL;
    if (argc < 3){
        printf("\nUsage: %s +/-/x// arg1 arg2\n", argv[0]);
    }
    else if ('-' == argv[2][0]){
        pfCalc = fnMinus;
    }
    else if ('+' == argv[2][0]){
        pfCalc = fnPlus;
    }
    else if ('x' == argv[2][0]){
        pfCalc = fnProduct;
    }
    else if ('/' == argv[2][0]){
        if (argv[3][0] == '0'){
            printf("Invalid operation\n");
        }
        else {
            pfCalc = fnDivide;
        }
        
    }
    (NULL == pfCalc) ? 0 : printf("\nResult: %d\n", (*pfCalc)(atoi(argv[1]), atoi(argv[3])));
    return 0;
}
