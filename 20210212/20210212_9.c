/*Разширяване на заделена памет с realloc
Напишете програма, която пита потребителя колко
памет иска и заделя съответния блок памет. След
това попитайте потребителя за нов размер и
използвайте функция, която прави това.*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    unsigned int size = 0;
    char* p = NULL;

    printf("Enter size:\n");
    scanf("%d", &size);

    p = (char*)malloc(size);
    if (NULL == p){
        printf("Allocation memory error\n");
        exit(1);
    }

    printf("Addresses of allocated memory: %p\n", p);

    printf("Enter new size:\n");
    scanf("%d", &size);
    p = realloc(p, size);
    if (NULL == p){
        printf("Reallocation memory error\n");
        exit(2);
    }
    printf("Addresses of allocated memory: %p\n", p);
    
    free(p);
    return 0;
}
