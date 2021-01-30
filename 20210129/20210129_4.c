#include <stdio.h>

int function(int a, int b, int c){
    return a*2 + b*c;
}

int main(void){
    int x = 0;
    int y = 0;
    int z = 0;
    int rez = 0;
    printf("Enter a value for integer x:\n");
    scanf("%d", &x);
    printf("Enter a value for integer y:\n");
    scanf("%d", &y);
    printf("Enter a value for integer z:\n");
    scanf("%d", &z);
    rez = function(x,y,z);
    printf("Rezult: %d\n", rez);
    return 0;
}
