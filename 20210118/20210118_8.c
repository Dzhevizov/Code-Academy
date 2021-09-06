#include <stdio.h>

char c;
int isLetter();

int main(){
    scanf("%d", &c);
    isLetter(c);
        
    return 0;
}

int isLetter(c){
        if (c >= 65 && c<= 90){
            printf("The parameter is the capital letter \"%c\".\n", c);
        }
        else if (c >= 97 && c<=122){
            printf("The parameter is the small letter \"%c\".\n", c);
        }
        else{
            printf("The parameter is not a letter.\n");
        }

}
