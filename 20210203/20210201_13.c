/*напишете функцията void lower(char s[]), която
преобразува главните букви в малки.*/

#include <stdio.h>

void lower(char s[]){
    int i = 0;
    while (s[i] != '\0'){
        if (s[i] >= 'A' && s[i] <= 'Z'){
            s[i] += 32;
        }
        printf("%c", s[i]);
        i++;
    }
    return;
}

int main(){
    char s[100] = "hjkGJcCcM564cCHjkHj22C1";
    lower(s);
    return 0;
}
