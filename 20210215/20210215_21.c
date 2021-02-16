/*Напишете функция, която сортира лексикографски масив от
символи (char[]) използвайки qsort.*/

#include <stdio.h>
#include <stdlib.h>

int cmpfunc(const void *a, const void *b){
    return (*(int *)a - *(int *)b);
}

int main(){
    int array[] = {17, 5, 15, 2, 13};
    int *p;
    p = array;
    int n;

    printf("Before sorting: \n");
    for (n = 0; n < 5; n++){
        printf("%d ", *(p + n));
    }

    qsort(array, 5, sizeof(int), cmpfunc);

    printf("\nAfter sorting: \n");
    for (n = 0; n < 5; n++){
        printf("%d ", *(p + n));
    }

    return (0);
}
