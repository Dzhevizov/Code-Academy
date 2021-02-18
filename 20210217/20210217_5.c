/*Намерете стойностите в интервала 1-5, включително, в двумерен масив
[5] [5] пълен със случайни числа в интервала 0-10, включително.
Използвайте функция, която да пълни числата със случайни.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int fnSearch(int arr[][5], int a, int b){
        if ( arr[a][b] >= 1 && arr[a][b] <= 5){
            return arr[a][b];
        }
        else{
            return 0;
        }
    }
int (*fun_ptr)() = fnSearch;

int main(){
    int array[5][5];
    int *p = (int *)array;
    srand(time(NULL));

    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 5; j++){
            *(p + 5 * i + j) = rand() % 10;
        }
    }

    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 5; j++){
            printf("%d ", *(p + 5 * i + j));
            if (j == 4){
                printf("\n");
            }
        }
    }

    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 5; j++){
            {
                if (fnSearch(array, i , j) != 0){
                    printf("array[%d][%d] = %d\n", i, j, fun_ptr(array, i, j));
                }
                
            }
        }
    }

    return 0;
}
