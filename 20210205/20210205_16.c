/*Напишете програма за умножение на два едномерни
масиви, елемент по елемент. Изведете изходния масив на екрана.*/

#include <stdio.h>

void productOfArrays(int arr1[], int arr2[], int arr3[][2], int n, int m){
    int product = 0;

    for (int i = 0; i < n; ++i){
        for (int j = 0; j < m; ++j){
            arr3[i][j] = 0;
        }
    }

    for (int i = 0; i < n; ++i){
        for (int j = 0; j < m; ++j){
            arr3[i][j] = arr1[i] * arr2[j];
        }
    }
}

void display(int arr3[][2], int n, int m){
    printf("Output matrix\n");
    for (int i = 0; i < n; ++i){
        for (int j = 0; j < m; ++j){
            printf("%d ", arr3[i][j]);
            if (j == m - 1){
                printf("\n");
            }
        }
    }
}

int main(){
    int arr1[3] = {1,2,3};
    int arr2[2] = {1,2};
    int arr3[3][2];
    productOfArrays(arr1,arr2,arr3,3,2);
    display(arr3,3,2);
    return 0;
}
