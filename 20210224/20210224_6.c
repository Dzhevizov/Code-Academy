/*Напишете макрос с променлив брой параметри, който
извиква printf със префикс “TRACE: ”*/


#include <stdio.h>

#define MY_PRINT(...) printf("TRACE: My favourite numbers are : %d, %d, %d\n", __VA_ARGS__)
int main(void) {
MY_PRINT(3, 7, 21);
return 0;
}
