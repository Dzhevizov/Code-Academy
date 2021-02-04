/*Напишете функция int printArr(int a[], int l), която
получава като първи аргумент началото на масив от интеджери,
а като втори неговата дължина и принтира всички елементи на
масивa един по един до неговия край.*/

#include <stdio.h>

int printArr(int a[], int l){
    for (int i = 0; i < l; i++){
        printf("%d\n", a[i]);
    }
}

int main(){
    int a[5] = {1,2,3,4,5};
    printArr(a,5);
    return 0;
}
