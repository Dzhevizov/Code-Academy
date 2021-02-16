/*Напишете програма, която дефинира масив [10][10][10],
пълни го със случайни числа и смята средното аритметично,
само с един цикъл.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int array[10][10][10] = {0};
    int *p;
    p = (int*)array;
    int sumArr = 0;
    float averageSum = 0; 
    srand(time(NULL));
    int i = 0;

    for (i = 0; i < 10*10*10; i++){
        *(p + i) = rand() % 10;
        sumArr += *(p + i);
        if (i % 10 == 0){
            printf("\n");
            if (i % 100 == 0){
                printf("\n");
            }
        }
        printf("%d ", *(p + i));
    }
    printf("\n");
    averageSum = (float)sumArr / 1000;
    printf("Average sum of elements in array is: %f\n", averageSum);
}
