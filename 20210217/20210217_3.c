/*Направете масив от указатели към функции по
следния начин:
void add(){...}
void fun2(){...}
void fun3(){...}
void (*func_ptr[3])() = {fun1, fun2, fun3};
Направете меню, с което да питате потребителя коя от
горните функции иска да използва – събиране, изваждане,
умножение и деление. След това попитайте за числата, които
да участват в тази операция, и извикайте функцията, която да
извърши желаната операция.*/

#include <stdio.h>
#include <stdlib.h>

int fnPlus(int nA, int nB) { return (nA + nB); }
int fnMinus(int nA, int nB) { return (nA - nB); }
int fnMultiply(int nA, int nB) { return (nA * nB);}
int fnDivide(int nA, int nB) {return (nA / nB);}

int (*func_ptr[4])() = {fnPlus, fnMinus, fnMultiply, fnDivide};

int main(){
    printf("Make a choice which function you want to use.\n");
    printf("For plus type 0\n");
    printf("For minus type 1\n");
    printf("For multiply type 2\n");
    printf("For divide type 3\n");
    
    int choice = 0;
    scanf("%d", &choice);

    printf("Which numbers you want to calculate?\n");
    printf("Type them one by one\n");

    int x, y;
    scanf("%d", &x);
    scanf("%d", &y);

    if (choice == 3 && y == 0){
        printf("Invalid operation\n");
    }
    else {
        printf("Result: %d\n", func_ptr[choice](x,y));
    }

    return 0;
}
