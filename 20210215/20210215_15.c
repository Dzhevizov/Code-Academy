/*Ще копираме стрингове. Дефинирайте и инизиалицирайте два стринга:
string 1: "A string to be copied."
string3: "I am very good in strings coping!"
Дефинирайте и два празни стринга, в които ще копираме string 2,
string4. Дефинирайте функция, която през пойнтери ще извърши
копирането от стринг към стринг. Използвайте while и факта, че
*pointer++ отива към следващия символ.
Помислете за терминиращия символ. Принтирайте двата изкопирани
стринга.*/

#include <stdio.h>
#include <stdlib.h>


int main(){
    char string1[] = "A string to be copied";
    char string2[] = {0};
    char string3[] = "I am very good in strings coping";
    char string4[] = {0};
    char* p1;
    char* p2;
    char* p3;
    char* p4;
    p1 = string1;
    p2 = string2;
    p3 = string3;
    p4 = string4;

    while (*p1 != '\0')
        *p2++ = *p1++;
    *p2 = '\0';
    printf("string2: %s\n", string2);

    while (*p3 != '\0')
        *p4++ = *p3++;
    *p4 = '\0';
    printf("string4: %s\n", string4);
    
    return 0;
}
