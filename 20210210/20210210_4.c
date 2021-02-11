/*Напишете програма, която да генерира случайна парола от 6 букви
докато user-а я хареса.
Вариант 1: може да използвате цикли while/for + стрингове
Вариант 2: използвайте функция
Указания:
1. Генерирайте парола
2. Проверете дали потребителя е харесва
3. Повторете докато потребителя си хареса паролата*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char password[6];
    int l = 0;
    int choice = 0;
    int random;

void passGenerator(){
    srand((unsigned)time(0));
    for (int i = 0; i < 6; i++){
            random = rand() % 26;
            password[l] = 'a' + random;
            l++;
        }
        printf("Your password is: %s\n", password);
}

int main(){
    
    while (choice != 1){
        passGenerator();
        
        printf("Press 1 to accept your password\n");
        printf("Press 2 to generate a new password\n");
        scanf("%d", &choice);
        if (choice == 1){
            printf("You have accepted your password.\n");
            break;
        }
        else{
            l = 0;
        }
    }
    return 0;
}
