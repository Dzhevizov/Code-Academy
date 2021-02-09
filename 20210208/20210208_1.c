/*Дефинирайте и инициализирайте едномерен масив с 5
елемента. След като сте готови, направете въвеждане на данните в
масива, като четете от потребителя със scanf.*/

#include <stdio.h>

int main(){
    
    int array [5] = {0};
    int i;
    printf("Enter 5 elements of an array\n");
    for (i = 0; i < 5; i++){
        scanf("%d", &array[i]);
    }
    printf("Your array is: {%d,%d,%d,%d,%d}\n", array[0], array[1], array[2], array[3], array[4]);
    
    return 0;
}
