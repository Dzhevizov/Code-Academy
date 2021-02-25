/*Напишете макрос, който свързва два идентификатора в
един общ (конкатениране на идентификатори)*/

#include <stdio.h>
#define MY_CONCAT(x,y) x##y

int main() {
    char name[20];
    MY_CONCAT(print,f)("Enter your name\n");
    MY_CONCAT(scan,f)("%s", &name);
    MY_CONCAT(print,f)("Hello %s\n", name);
    return 0;
}
