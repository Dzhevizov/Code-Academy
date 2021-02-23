/*Напишете обединение от три стойности: цяло число, число с
плаваща запетая и низ. Инициализирайте отделните членове и ги
изведете на екрана.*/

#include <stdio.h>
#include <string.h>

union my_union{
    int num;
    float f_num;
    char text[20];
};
enum type{
    VALUE_INT,
    VALUE_FLOAT,
    VALUE_STR
};
struct my_values{
    enum type my_type;
    union my_union my_var;
};
void printValue(struct my_values *pValue){
    if (VALUE_INT == pValue->my_type){
        printf("INT: %d\n", pValue->my_var.num);
    }
    else if (VALUE_FLOAT == pValue->my_type){
        printf("FLOAT: %f\n", pValue->my_var.f_num);
    }
    else if (VALUE_STR == pValue->my_type){
        printf("STR: %s\n", pValue->my_var.text);
    }
}

int main(){
    struct my_values value1 = {VALUE_INT, 10};
    printValue(&value1);
    printf("num: %d, f_num: %f, text: %s\n", value1.my_var.num,
           value1.my_var.f_num, value1.my_var.text);
    
    struct my_values value2 = {VALUE_FLOAT, .my_var.f_num = 3.14};
    printValue(&value2);
    printf("num: %d, f_num: %f, text: %s\n", value2.my_var.num,
           value2.my_var.f_num, value2.my_var.text);

    struct my_values value3 = {VALUE_STR, .my_var.text = "apple"};
    printValue(&value3);
    printf("num: %d, f_num: %f, text: %s\n", value3.my_var.num,
           value3.my_var.f_num, value3.my_var.text);

    return 0;
}
