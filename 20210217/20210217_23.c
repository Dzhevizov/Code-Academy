/*Използване на метода на мехурчето за сортиране на масив от
числа (виж. wiki).
Потребителят въвежда броя числа и след това въвежда всяко
едно число. Напишете програма, която трябва да сортира числата
и да ги изведе в сортиран вид, като най-малкото се извежда първо.
Вариация: Да се направи същото с масив от символи.*/

#include <stdio.h>

int main(){

    int num_array[10] = {5,9,3,8,4,0,7,6,7,2};
    int i,j,k;

    for (i = 0; i < 10; ++i){
        for (j = 9; j > i; --j){
            if (num_array[j-1] > num_array[j]){
                k = num_array[j-1];
                num_array[j-1] = num_array[j];
                num_array[j] = k;
            }
        }
    }

    for (k = 0; k < 10; k++){
        printf("%d ", num_array[k]);
    }
    printf("\n");

    char char_array[10] = {'d','r','h','m','p','w','a','t','c','l'};

    for (i = 0; i < 10; ++i){
        for (j = 9; j > i; --j){
            if (char_array[j-1] > char_array[j]){
                k = char_array[j-1];
                char_array[j-1] = char_array[j];
                char_array[j] = k;
            }
        }
    }

    for (k = 0; k < 10; k++){
        printf("%c ", char_array[k]);
    }
    return 0;
}
