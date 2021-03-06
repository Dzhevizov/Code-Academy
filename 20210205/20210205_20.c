/* Проверете дали сумата от елементите на два тримерни
масива са еднакви. Използвайте задачата която сумира елементите на
масив, която правихме по горе за да получите едно сумите на двата
тримерни масива и след това сравнявайте сумите. Тази задача е
подходяща при наличието на голям брой данни (матрици тримерно) те да
бъдат подредени по някакъв признак.*/

#include <stdio.h>

int main(){
    int first[3][3][3] = {1, 5, 9, 11, 15, 19, 21, 25, 29, 2, 10, 18, 22, 30, 38, 42, 50, 58, 3, 15, 27, 33, 45, 57, 63, 75, 87};
    int second[3][3][3] = {3, 6, 2, 13, 16, 12, 23, 26, 32, 6, 12, 4, 26, 32, 24, 46, 52, 64, 9, 18, 6, 39, 48, 36, 69, 78, 96};
    int sum1 = 0;
    int sum2 = 0;

    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            for (int k = 0; k < 3; k++){
                sum1 += first[i][j][k];
            }
        }
    }

    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            for (int k = 0; k < 3; k++){
                sum2 += second[i][j][k];
            }
        }
    }

    printf("sum1 = %d\n", sum1);
    printf("sum2 = %d\n", sum2);
    if (sum1 == sum2){
        printf("sum1 = sum2");
    }
    else if (sum1 < sum2){
        printf("sum1 < sum2");
    }
    else {
        printf("sum1 > sum2");
    }
    return 0;
}
