/*напишете функция void squeeze(char s[], int c), която
премахва символа с от низа s[]*/
#include <stdio.h>

void squeeze(char s[],int c){
    int i = 0;
    while (s[i] != '\0'){
        if (s[i] == c){
                i++;
                continue;
            }
        printf("%c", s[i]);
        i++;
    }
    return;
}

int main(){
    char s[100] = "hjkgjcccm564cchjkhj22c1";
    int c = 'c';
    squeeze(s,c);
    return 0;
}
