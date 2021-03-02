/*Дефинирайте структура като
потребителски тип. Инициализирайте членовете на
структурата, използвайки новия потребителски тип.
Отпечатайте.*/


#include <stdio.h>

typedef struct {int x; float y} t_point;

int main(){
    t_point a = {5,2.6};
    printf("%d\n", a.x);
    printf("%f\n", a.y);
    return 0;
}
