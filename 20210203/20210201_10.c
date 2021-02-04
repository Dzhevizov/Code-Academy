/*Напишете функция void itob(int n, char s[], int b), която
преобразува цяло число n в низ s базиран на основа b.
Например itob( n, s[], 16) представя числото n като шеснадесетично число в
стринга s[].*/

#include <stdio.h>
#include <string.h>

void itob();

int main(void){
    int n;
    int b;
    char s[64]="";
    printf("Enter a whole number: ");
    scanf("%d", &n);
    printf("\nEnter a base for conversion: ");
    scanf("%d", &b);
    printf("\n%d (10) -> ", n); 
    if (n>0){
    goto print;
    }
    else if (n<0){
        if (b == 2 || b == 8 || b == 16){
        n = __INT_MAX__ + n + 1;
        goto print; 
        }
        else {
            n=-n;
            printf("-");
            goto print;
        }
    }
    print:
    itob(n,s,b);       
    printf("%s",strrev(s));
    printf(" (%d)\n", b);
    return 0;
 }
 
 void itob(int n, char s[], int b) {
    int count = 0;
    do {
        if (n % b > 9) {
            s[count] = 55 + (n % b);
        }
        else{
            s[count] = '0' + n % b;
        }
        count++;
        n /= b;
    } while (n > 0);
 }
