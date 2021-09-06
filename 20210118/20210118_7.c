#include <stdio.h>

int main(){
    int nA = 1;
    int nB = (nA == 1 ? 2 : 0);
    printf("A value is %d\n", nA);
    printf("B value is %d\n", nB);

    scanf("%d", &nA);
    int max = (nA > nB ? nA : nB);
    printf("The max value is %d\n", max);

    return 0;
}
