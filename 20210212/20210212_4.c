/*Заделяне и освобождаване на памет - malloc, free. Заделете
динамично памет за масив и попълнете елементите*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    unsigned int size = 0;
    int* p = NULL;

    printf("Enter size:\n");
    scanf("%d", &size);

    p = (int*)malloc(size * sizeof(int));
    if (NULL == p){
        printf("Allocation memory error\n");
        exit(1);
    }

    printf("Enter elements of array:\n");
    for (int i = 0; i < size; i++){
        scanf("%d", (p + i));
    }

    printf("Elements of your array are: ");
    for (int i = 0; i < size; i++){
        printf("%d ", *(p + i));
    }

    free(p);
    return 0;
}
