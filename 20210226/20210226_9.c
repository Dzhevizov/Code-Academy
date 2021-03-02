/*Изведете резултата от деленето на две цели
числа от тип int като double с преобразуване и без такова*/

#include <stdio.h>

int main(){
    int num1 = 35;
    int num2 = 4;
    double res = 0;
    res = (double)num1 / num2;
    printf("Value of res: %lf, N1/N2: %lf\n",
           res, num1 / num2);

    short int snum = 13; 
    int *pValue = (int *)&snum;
    *pValue = 31; 
    printf("%d, %ld", snum, *pValue);
    char char1 = 'x'; 
    double *pdouble = (double *)&char1;
    *pdouble = 0.0; 
    printf("%c, %f", char1, *pdouble);

    return 0;
}
