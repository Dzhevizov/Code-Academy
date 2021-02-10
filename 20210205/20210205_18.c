/*Напишете програма за умножение на два тримерни
масива, елемент по елемент.*/

#include <stdio.h>

void multiplyMatrices(int first[][2],
                      int second[][2],
                      int result[][2],
                      int r1, int c1, int r2, int c2) {

    for (int i = 0; i < r1; ++i) {
        for (int j = 0; j < c2; ++j) {
         result[i][j] = 0;
        }
    }

    for (int i = 0; i < r1; ++i) {
        for (int j = 0; j < c2; ++j) {
            for (int k = 0; k < c1; ++k) {
                result[i][j] += first[i][k] * second[k][j];
         }
      }
   }
}
void display(int result1[][2], int result2[][2], int row, int column) {

    printf("\nOutput Matrix:\n");
    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < column; ++j) {
         printf("%d  ", result1[i][j]);
         if (j == column - 1)
            printf("\n");
        }
    }
    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < column; ++j) {
         printf("%d  ", result2[i][j]);
         if (j == column - 1)
            printf("\n");
        }
    }
}

int main(){
    int first[2][2][2] = {{{1,2},{3,4}},{{5,6},{7,8}}};
    int second[2][2][2] = {{{9,8},{7,6}},{{5,4},{3,2}}};
    int first1[2][2] = {1,2,3,4};
    int first2[2][2] = {5,6,7,8};
    int second1[2][2] = {9,8,7,6};
    int second2[2][2] = {5,4,3,2};
    int result1[2][2];
    int result2[2][2];
    multiplyMatrices(first1,second1,result1,2,2,2,2);
    multiplyMatrices(first2,second2,result2,2,2,2,2);
    display(result1,result2,2,2);
    return 0;
}
