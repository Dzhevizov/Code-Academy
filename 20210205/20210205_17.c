/*Напишете програма за умножение на два двумерни
масиви, елемент по елемент.*/

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

void display(int result[][2], int row, int column) {

    printf("\nOutput Matrix:\n");
    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < column; ++j) {
         printf("%d  ", result[i][j]);
         if (j == column - 1)
            printf("\n");
        }
    }
}

int main(){
    int first[3][2] = {1,2,3,4,5,6};
    int second[2][2] = {1,2,3,4};
    int result[3][2];
    multiplyMatrices(first,second,result,3,2,2,2);
    display(result,3,2);
    return 0;
}
