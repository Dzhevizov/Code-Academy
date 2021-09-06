#include <stdio.h>

int main(){
    int nA, nB, nX, nY;
    scanf("%d", &nA);
    scanf("%d", &nB);
    scanf("%d", &nX);
    scanf("%d", &nY);

    if (nA > nB && nA != 0){
        printf("&& Operator: Both conditions are true\n");
    }
    if (nX > nY || nY != 20){
        printf("|| Operator: Only one condition is true\n");
    }
    /* В горните две проверки първо се извършват операторите
    за сравнение и след това логическите оператори */

    if (!(nA > nB && nB != 0)){
        printf("! Operator: Both conditions are true\n");
    }
    else{
        printf("Both conditions are true\n");
    }
    /* При тази проверка тъй като скобите са с най-голям
    приоритет първо се изпълняват операторите в тях:
    а именно - отново първо се извършват операторите за сравнение
    и след това логическото И. След като се изпълнят всички
    оператори в скобите логическото НЕ "обръща" резултата 
    (от 0 на 1 или от 1 на 0).*/
    
    return 0;
}
