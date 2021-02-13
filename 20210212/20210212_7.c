/*Заделяне на памет с calloc
Заделете динамична памет за масив от елементи, като
извикате функция, която нулира заделената памет.*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    unsigned int size = 0;
    int* p = NULL;

    printf("Enter size:\n");
    scanf("%d", &size);

    p = (int*)calloc(size,sizeof(int));
    if (NULL == p){
        printf("Allocation memory error\n");
        exit(1);
    }
    printf("Value of elements in array:\n");
    for (int i = 0; i < size; i++){
        printf("%d ", *(p + i));
    }
    free(p);
    return 0;
}
