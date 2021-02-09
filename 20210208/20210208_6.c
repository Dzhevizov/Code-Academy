/*Напишете функция, която получава указател към масив с числа и връща
най-голямото от тях.*/

#include <stdio.h>

int max_value(int arr[], int n){
    for ( int i = 1; i < n; i++){
        if (arr[0] < arr[i]){
            arr[0] = arr[i];
        }
    } 
    return arr[0];
}

int main(){
    int arr[10] = {32,4,15,8,39,11,24,6,17,20};
    int n = 10;
    printf("Max value of array is: %d\n", max_value(arr,10));
    return 0;
}
