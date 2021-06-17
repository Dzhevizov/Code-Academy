/*Заделяне на памет с calloc
Заделете динамична памет за масив от елементи, като
извикате функция, която нулира заделената памет.*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    unsigned int size = atoi(argv[1]);
    int* p = NULL;

    p = (int*)calloc(size,sizeof(int));
    if (NULL == p){
        printf("Allocation memory error\n");
        return 1;
    }
    /*printf("Value of elements in array:\n");*/
    for (int i = 0; i < size; i++){
        /*printf("%d ", *(p + i));*/
        if (*(p + i) != 0){
            printf("Allocated memory is not set to 0\n");
            return 2;
        }
    }
    free(p);
    return 0;
}
