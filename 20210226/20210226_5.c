/*Дефинирайте потребителски тип
към масив. Инициализирайте масива, изведете на
конзолата.*/

#include <stdio.h>

typedef int t_array[10];

int main(){
    t_array arrInt = {1,5,8,10,15,13,16,20,26,28};
    for (int i = 0; i < 10; i++){
        printf("%d\n", arrInt[i]);
    }
    
    return 0;
}


