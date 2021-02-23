/*Напишете функция, която преобразува число в низ и обратното,
като използва описанието от предишната задача.*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

enum type{
    VALUE_INT,
    VALUE_STR
};
union my_union{
    int num;
    char text[20];
};
struct my_values{
    enum type my_type;
    union my_union my_var;
};
void printValue(struct my_values *pValue){
    if (VALUE_INT == pValue->my_type){
        itoa(pValue->my_var.num, pValue->my_var.text, 10);
        printf("STR: %s\n", pValue->my_var.text);
    }
    else if (VALUE_STR == pValue->my_type){
        pValue->my_var.num = atoi(pValue->my_var.text);
        printf("INT: %d\n", pValue->my_var.num);
    }
}

int main(){
    struct my_values value1 = {VALUE_INT, 10};
    printValue(&value1);

    struct my_values value2 = {VALUE_STR, .my_var.text = "20"};
    printValue(&value2);

    return 0;
}
