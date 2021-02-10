/*Даден е едномерен масив с N елемента (вие изберете
стойност на N),напишете функция, която изчислява средната стойност на
елементите в масива, като я връща като double float.*/

#include <stdio.h>

double averageValue(int array[], int n){

    double sum = 0;
    for (int i = 0; i < n; i++)
        sum += array[i];

    return sum / n;
}

int main(){
    int array[] = {1,5,6,8,11,13,17,22,24,27};
    int n = 10;
    printf("The average value of array is: %f\n", averageValue(array,n));

    return 0;
}
