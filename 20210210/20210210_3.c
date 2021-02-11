/*Използвайте Задача 1. за да напишете програма, която
проверява дали съобщението не е палиндром. Палиндром е съобщение, в
което буквите от ляво на дясно са същите като от дясно на ляво.
I did, did I?*/

#include <stdio.h>
#include <string.h>

int main(){
    char message[100];
    char c;
    int i=0;
    int j=0;
    int k=0;
    int check = 0;
    char* p;
    p = message;

    printf("Type a message:\n");
    while ((c = getchar()) != '\n'){
        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')){
            message[k] = c;
            k++;
            message[k] = '\0';
        }
        else{
            continue;
        }
    }
    printf("%s\n", message);

    for (i=0, j=k-1; i < k, j > 0; i++,j--){
        if(*(p+i) != *(p+j)){
            check++;
        }
    }

    if (check == 0){
        printf("Your message is palindrom\n");
    }
    else{
        printf("Your message is not palindrom\n");
    }
    return 0;
}
