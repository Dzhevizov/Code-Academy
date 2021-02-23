/*Напишете обединение от число и низ, както и описател с изброим
тип за съдържанието на обединението. Напишете функция, която
получава указател към обединението и изброимия тип и извежда
съответно низ или число.*/

#include <stdio.h>
#include <string.h>

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
        printf("INT: %d\n", pValue->my_var.num);
    }
    else if (VALUE_STR == pValue->my_type){
        printf("STR: %s\n", pValue->my_var.text);
    }
}

int main(){
    struct my_values value1 = {VALUE_INT, 10};
    printValue(&value1);

    struct my_values value2 = {VALUE_STR, .my_var.text = "apple"};
    printValue(&value2);

    return 0;
}
