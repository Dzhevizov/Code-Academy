/*Реализация на масив с променлива размерност
Тази задача е подобна на задача 2, където
използваме char масив. Тук може да използвате
друг тип.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

long int dinArrFun(unsigned int size){
    return malloc(size * sizeof(long int));
}
void cleanDinArrp(long int* p){
    free(p);
}
long int resizeDinArr(long int* p, unsigned int size, unsigned int newSize){
    int* q = dinArrFun(newSize);
    memcpy(q,p,newSize * sizeof(long int));
    cleanDinArrp(p);
    return q;
}
int main(){
    unsigned int size = 0;
    unsigned int newSize = 0;
    long int* p = NULL;
    long int* q = NULL;
    long int sum = 0;

    printf("Enter size:\n");
    scanf("%li", &size);

    p = dinArrFun(size);
    if (NULL == p){
        printf("Allocation memory error\n");
        exit(1);
    }
    printf("Enter elements of array:\n");
    for (int i = 0; i < size; i++){
        scanf("%li", (p + i));
        sum += *(p + i);
    }
    printf("Your array is full\n");
    printf("Do you want to include more elements?\n");
    printf("(Type \"y\" for yes and \"n\" for no)\n");
    char choice = '\0';
    scanf("%s", &choice);
    if (choice == 'y'){
        printf("What size you want to be your array?\n");
        scanf("%d", &newSize);
        q = resizeDinArr(p,size,newSize);
        if (NULL == q){
            printf("Reallocation memory error\n");
            exit(2);
        }
        printf("Enter the rest elements:\n");
        for (int j = 0; j < newSize - size; j++){
            scanf("%li", (q + j));
            sum += *(q + j);
        }
        printf("Sum of elements is: %li\n", sum);
        cleanDinArrp(q);
    }
    else{
        printf("Sum of elements is: %li\n", sum);
        cleanDinArrp(p);
    }
    return 0;
}
