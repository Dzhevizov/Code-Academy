/*Дефинирайте и инициализирайте тримерен масив с по 5
елемента (5 x 5 x 5).*/

#include <stdio.h>

int main(){
    int array[5][5][5] = {0};
    int i,j,k;
    int value = 0;
    for (i = 0; i < 5; i++){
        for (j = 0; j < 5; j++){
            for (k = 0; k < 5; k++){
                value++;
                printf("array[%d][%d][%d] : %d\n", i,j,k,value);
            }
        }
    }
    
return 0;
}
