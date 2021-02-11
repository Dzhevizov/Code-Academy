/*Напишете програма, която чете съобщение, след което го
принтира в обратен ред:
Enter a message: I am Miro.
Reversal is : .oriM ma I
Използвайте getchar() за да вземете символите от конзолата, запазете ги в
масив от чарове, прекратете четенето до достигане на \n. Използвайте
пойнтер, който да сочи към текущата позиция на масива. Чрез него
принтирайте масива в обратен ред.*/

#include <stdio.h>

int main(){
    char arr[100];
    char c;
    int i = 0;
    char* p = 0;
    p = arr;
    printf("Enter a message:\n");
    while ((c = getchar()) != '\n'){
        arr[i] = c;
        i++; p++;
    }
    printf("Reversal is:\n");
    for ( ;i > 0;i--){
        p--;
        putchar(*p);
    }
    return 0;
}
