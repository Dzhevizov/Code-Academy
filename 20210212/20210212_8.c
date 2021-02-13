/*Заделяне на памет от стека с alloca.
Заделете памет в стека (няма нужда от free())*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int size;
    int* p = NULL;

    printf("Enter size:\n");
    scanf("%d", size);

    p = (int*)alloca(size * sizeof(int));
    if (NULL == p){
        printf("Allocation memory error\n");
        exit(1);
    }
    printf("Enter elements of array:\n");
    for (int i = 0; i < size; i++){
        scanf("%d", (p + i));
    }
    printf("Value of elements in array:\n");
    for (int i = 0; i < size; i++){
        printf("%d ", *(p + i));
    }
    return 0;
}
