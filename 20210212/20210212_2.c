/*Разширяване на заделена памет с realloc*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    int *p = NULL;
    unsigned int size = 0;

    printf("Enter size:\n");
    scanf("%d", &size);

    p = (int *)malloc(size * sizeof(int));
    if (NULL == p){
        printf("Allocation memory error!\n");
        exit(1);
    }
    printf("Addresses of allocated memory: %p\n", p);

    printf("\nEnter the new size: ");
    scanf("%d", &size);
    p = realloc(p, size * sizeof(int));
    if (NULL == p)
    {
        printf("Reallocation memory error!\n");
        exit(2);
    }
    printf("Addresses of reallocated memory: %p\n", p);
    free(p);
    return 0;
}
