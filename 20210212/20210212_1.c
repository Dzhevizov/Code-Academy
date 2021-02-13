/*Да се направи програма, която заделя динамичен масив с брой елементи
зададени от потребителя. За всеки елемент от масива се очаква потребителят да въведе
цяло и число и след това се изчислява сумата на всички елементи от масива.*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    unsigned int numElements = 0;
    int* p = NULL;
    int sum = 0;
    int i = 0;

    printf("Enter number of elements:\n");
    scanf("%d", &numElements);

    p = (int*)malloc(numElements * sizeof(int));
    if (NULL == p){
        printf("Allocation memory error\n");
        exit(1);
    }

    printf("Enter elements of array:\n");
    for (i = 0; i < numElements; i++){
        scanf("%d", (p + i));
        sum += *(p + i);
    }
    printf("Sum of elements is: %d\n", sum);
    free(p);
    return 0;
}
