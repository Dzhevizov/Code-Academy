/*Напишете програма, която намира дължината на стринг с
пойнтер! (без да използва length());*/

#include <stdio.h>

int main(){
    char a[] = "Hello world";
    char *p;
    p = a;
    int length = 0;

    while (*p != '\0'){
        length++;
        p++;
    }
    printf("The length of string is %d\n", length);
    
    return 0;
}
