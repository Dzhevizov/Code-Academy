/*Напишете функция, която сортира лексикографски (по
азбучен ред) масив от символи (char[]). Използвайте “Метода на
мехурчето”, потърсете в интернет.*/

#include <stdio.h>

int main(){
    char array[10] = {'d','r','h','m','p','w','a','t','c','l'};
    int i,j,k;

    for (i = 0; i < 10; ++i){
        for (j = 9; j > i; --j){
            if (array[j-1] > array[j]){
                k = array[j-1];
                array[j-1] = array[j];
                array[j] = k;
            }
        }
    }

    for (k = 0; k < 10; k++){
        printf("%c ", array[k]);
    }
    return 0;
}
