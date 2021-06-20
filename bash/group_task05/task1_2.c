/*Направете две функции и извикайте желаната функция с
указател към функция, съобразно знака, подаден от командния ред*/
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
    if (argc < 5){
        printf("\nUsage: %s +/-/x// arg1 arg2\n", argv[0]);
        return 1;
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
            return 2;
        }
        else {
            pfCalc = fnDivide;
        } 
    }
    else {
        printf("Invalid operator\n");
        return 3;
    }
    (NULL == pfCalc) ? 0 : printf("\nResult: %d\n", (*pfCalc)(atoi(argv[1]), atoi(argv[3])));
    int expected_result = atoi(argv[4]);
    if ((*pfCalc)(atoi(argv[1]), atoi(argv[3])) != expected_result){
        printf("Incorrect result\n");
        return 4;
    }
    return 0;
}
