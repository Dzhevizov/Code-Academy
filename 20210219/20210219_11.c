/*Дефинирайте структура, в която има член указател към самата
структура. Използвайте тази структура, за да дефинирате две променливи,
които се указват една друга.*/

#include <stdio.h>

struct recurs {
    int x;
    struct recurs* prev;
    struct recurs* next;
};

int main(){
    struct recurs var1;
    struct recurs var2;

    var1.x = 10;
    var1.prev = NULL;
    var1.next = &var2;
    var2.x = 20;
    var2.prev = &var1;
    var2.next = NULL;

    printf("%d\n", var1.x);  
    printf("%d\n", var1.next->x); 
   
    printf("%d\n", var2.x); 
    printf("%d\n", var2.prev->x); 
    return 0;
}
