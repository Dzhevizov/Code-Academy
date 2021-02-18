/*Напишете програма аналог на спортния тотализатор.
Използвайте функции.
Насоки:
1. Давате право на избор на играча да избере тотализатор, в който
ще си пробва късмета: (5 от 35), (6 от 42) или (6 от 49)
2. При всяко завъртане програмата изписва 1 произволно число,
което не е извадено до момента.
3. Програмата вади числата, нужни за избраната игра (5 или 6).*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void five35(){
    int arr[5];
    srand(time(NULL));
    for (int i = 0; i < 5; i++){
        arr[i] = rand() % 35 + 1;
        printf("%d ", arr[i]);
    }
}

void six42(){
    int arr[6];
    srand(time(NULL));
    for (int i = 0; i < 6; i++){
        arr[i] = rand() % 42 + 1;
        printf("%d ",arr[i]);
    }
}

void six49(){
    int arr[6];
    srand(time(NULL));
    for (int i = 0; i < 6; i++){
        arr[i] = rand() % 49 + 1;
        printf("%d ",arr[i]);
    }
}

void (*fun_ptr[3])() = {five35, six42, six49};

int main(){
    int choice;
    printf("Choose a game\n");
    printf("for 5from35 type 0\n");
    printf("for 6from42 type 1\n");
    printf("for 6from49 type 2\n");
    scanf("%d", &choice);

    fun_ptr[choice]();
    return 0;
}
