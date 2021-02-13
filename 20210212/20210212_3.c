/*Напишете функции, с помощта на които да реализирате динамичен
масив от елементи, чиято големина може да се променя по време на
изпълнение на програмата*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int dinArrFun(unsigned int size){
    return (int)malloc(size * sizeof(int));
}
void cleanDinArrp(int* p){
    free(p);
}
int resizeDinArr(int* p, unsigned int size, unsigned int newSize){
    int* q = dinArrFun(newSize);
    memcpy(q,p,newSize * sizeof(int));
    cleanDinArrp(p);
    return q;
}
int main(){
    unsigned int size = 0;
    unsigned int newSize = 0;
    int* p = NULL;
    int* q = NULL;
    int sum = 0;

    printf("Enter size:\n");
    scanf("%d", &size);

    p = dinArrFun(size);
    if (NULL == p){
        printf("Allocation memory error\n");
        exit(1);
    }
    printf("Enter elements of array:\n");
    for (int i = 0; i < size; i++){
        scanf("%d", (p + i));
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
            scanf("%d", (q + j));
            sum += *(q + j);
        }
        printf("Sum of elements is: %d\n", sum);
        cleanDinArrp(q);
    }
    else{
        printf("Sum of elements is: %d\n", sum);
        cleanDinArrp(p);
    }
    return 0;
}
