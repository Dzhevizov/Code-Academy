/*Хванете дълъг стринг и пребройте колко пъти се среща всяка буква от
азбуката в него. Запишете резултата в масив за всяка буква.*/

#include <stdio.h>
#include <string.h>

int main(){
    char ynwa[1000];
    strcpy(ynwa, "When you walk through a storm\n");
    strcat(ynwa, "Hold your head up high\n");
    strcat(ynwa, "And don't be afraid of the dark\n");
    strcat(ynwa, "At the end of a storm\n");
    strcat(ynwa, "There's a golden sky\n");
    strcat(ynwa, "And the sweet silver song of a lark\n");
    strcat(ynwa, "Walk on through the wind\n");
    strcat(ynwa, "Walk on through the rain\n");
    strcat(ynwa, "Though your dreams be tossed and blown\n");
    strcat(ynwa, "Walk on, walk on\n");
    strcat(ynwa, "With hope in your heart\n");
    strcat(ynwa, "And you'll never walk alone\n");
    strcat(ynwa, "You'll never walk alone\n");
    
    printf("%s\n", ynwa);

    int atoz[26] = {0};
    int i = 0;
    char *p = ynwa;

    while (*p != '\0'){
        for (i = 0; i < 26; i++){
            if ((*p == 'a' + i) || (*p == 'A' + i)){
                atoz[i]++;
            } 
        }
        p++;
    }

    for (i = 0; i <26; i++){
        char c = 'a' + i;
        printf("%c : %d\n", c, atoz[i]);
    }

    printf("atoz = ");
    for (i = 0; i <26; i++){
        printf("%d ", atoz[i]);
    }
    return 0;
}
