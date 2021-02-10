/* Дефинирайте 2 масива с по 10 елемента, А и В, напълнете ги
със случайни числа от 0 до 20, умножете всеки от елементите А[i]*В[i] и
напишете резултата на екрана.
Вариация: Модифицирайте така, че да извежда резултат от целочислено
деление. (Каква проверка трябва да направите?)*/

#include <stdio.h>

int main(){
    int first[10] = {1,5,8,10,13,4,6,17,9,20};
    int second[10] = {2,4,14,3,16,18,0,3,5,2};
    int result1[10] = {0};
    int result2[10] = {0};

    for (int i = 0; i < 10; i++){
        result1[i] = first[i] * second[i];
        printf("result1[%d]: %d\n", i,result1[i]);
    }
    printf("-----------------------------\n");
    for (int i = 0; i < 10; i++){
        if (second[i] != 0){
            result2[i] = first[i] % second[i];
            printf("result2[%d]: %d\n", i,result2[i]);
        }
        else{
            printf("result2[%d]: NaN\n", i);
        }
    }
    return 0;
}
