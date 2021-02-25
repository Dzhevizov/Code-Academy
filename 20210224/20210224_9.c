/*Напишете макрос, който прави идентификатор на низ
(стринг)*/

#include <stdio.h>
#define MY_STR(x) #x

int main() {
    int nValue = 0;
    printf("%s\n", MY_STR(0));
    float fValue = 3.14;
    printf("%s\n", MY_STR(3.14));
    return 0;
} 
