#include <stdio.h>

int function(int a, int b){
    return (a+b)*4;
}

int main(void){
    int x = 0;
    int y = 0;
    int rez = 0;
    printf("Enter a value for integer x:\n");
    scanf("%d", &x);
    printf("Enter a value for integer y:\n");
    scanf("%d", &y);
    rez = function(x,y);
    printf("Rezult: %d\n", rez);
    return 0;
}
