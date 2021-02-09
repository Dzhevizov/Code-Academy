/*Дефинирайте и инициализирайте двумерен масив с по 5
елемента (5 x 5). След като сте готови, направете въвеждане на данните в
масива, като четете от потребителя със scanf.*/

#include <stdio.h>

int main(){
    int array[5][5] = {0};
    int i,j;

    printf("Enter 25 elements of an array\n");
    for (i = 0; i < 5; i++){
        for (j = 0; j < 5; j++){
            scanf("%d", &array[i][j]);
        }
    }
    printf("Your array is:\n");
    printf("{{%d,%d,%d,%d,%d},{%d,%d,%d,%d,%d},{%d,%d,%d,%d,%d},{%d,%d,%d,%d,%d},{%d,%d,%d,%d,%d}}\n",
    array[0][0],array[0][1],array[0][2],array[0][3],array[0][4],array[1][0],array[1][1],array[1][2],
    array[1][3],array[1][4],array[2][0],array[2][1],array[2][2],array[2][3],array[2][4],array[3][0],
    array[3][1],array[3][2],array[3][3],array[3][4],array[4][0],array[4][1],array[4][2],array[4][3],
    array[4][4]);
    return 0;
}
