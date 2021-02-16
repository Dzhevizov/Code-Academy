/*Връщаме се на кода написан в задача 15. Нека сега
отпечатаме стринговете с
декрементиране, започвайки отзад-напред.
*to -- = *from --;
Проверете готовата функция strlen.
https://www.tutorialspoint.com/c_standard_library/c_function_strlen.htm
Помислете как да направите проверка във функцията за копиране, дали
размерът на стринга, в който копираме, не е по-малък от размера на
стринга, от който копираме, и какво да се случва тогава.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(){
    char string1[] = "A string to be copied";
    char string2[] = "I am very good in strings coping";
    char* p1;
    char* p2;
    p1 = string1;
    p2 = string2;
    
    for (int i = 0; i < strlen(string1); i++){
        p1++; p2++;
    }
    for (int i = 0; i <= strlen(string1); i++){
        *p2-- = *p1--;
    }
    printf("%s\n", string2);

    return 0;
}
