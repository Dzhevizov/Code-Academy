#include <stdio.h>

void evenOrOdd(int);

int main(void){
    int x = 0;
    printf("Type an integer:\n");
    scanf("%d", &x);
    evenOrOdd(x);
    return 0;
}
void evenOrOdd(int n){
    int rez = ((n % 2 == 1) ? printf("odd") : printf("even"));
    printf("\n");
    return;
}
