/*Дефинирайте структура с три елемента, които са променливи тип int, char и float.
Елементите да са наименование на продукт, цена и количество.
Задайте стойност на всеки от елементите, както следва: chocolate, 2.50, 50. Отпечатайте
на екрана.*/

#include <stdio.h>
#include <string.h>

struct product{
    int quantity;
    char name[128];
    float price;
};

int main(){
    struct product chocolate;
    chocolate.quantity = 50;
    strcpy(chocolate.name, "chocolate");
    chocolate.price = 2.50;
    printf("Product quantity: %d\n", chocolate.quantity);
    printf("Product name: %s\n", chocolate.name);
    printf("Product price: %f\n", chocolate.price);

    return 0;
}
