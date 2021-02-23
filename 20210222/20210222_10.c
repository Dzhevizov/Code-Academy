/*Използвайки горните две задачи като база, обединете
обединението и описателя в една структура. Напишете функция,
която извежда съдържанието на новата структура.*/

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
