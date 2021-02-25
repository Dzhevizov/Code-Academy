/*Напишете макро GENERIC_MAX(type)
,което трябва да се експандне до следната функция:
int int_max(int x, int y){
return x > y ? x : y;
}
или
float float_max(float x, float y){
return x > y ? x : y;
}
или
char char_max(char x, char y){
return x > y ? x : y;
}*/

#include <stdio.h>
#define GENERIC_MAX(type,x,y) {type type##_max(type x, type y){(x) > (y)) ? (x) : (y)}}

int main(){
    int a = GENERIC_MAX(int,5,10);
    printf("%d\n", a);
    
    return 0;
}
