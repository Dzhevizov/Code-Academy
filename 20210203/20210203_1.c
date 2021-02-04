/*декларирайте три масива с три елемента:
Първият от тип char
Вторият от тип int
Третият от тип double
Отпечатайте размерите на масивите използвайки
оператора sizeof(arr);
принтирайте последния елемент от
декларираните по горе масиви:
Първият от тип char
Вторият от тип int
Третият от тип double*/

#include <stdio.h>

char arrC [3] = {'a','b','\0'};
int arrI [3] = {1,2,3};
double arrF [3] = {1.2,3.4,5.6};
int main(){
    printf("%d\n", sizeof(arrC));
    printf("%d\n", sizeof(arrI));
    printf("%d\n", sizeof(arrF));

    printf("%c\n", arrC[2]);
    printf("%d\n", arrI[2]);
    printf("%f\n", arrF[2]);
    return 0;
}
