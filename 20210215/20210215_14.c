/*Решете задачата за генериране на 6 буквена парола с
пойнтери.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

    char password[6];
    char *p = password;
    int l = 0;
    int choice = 0;
    int random;

void passGenerator(){
    srand((unsigned)time(0));
    while (l < 6){
            random = rand() % 26;
            *(p + l) = 'a' + random;
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
