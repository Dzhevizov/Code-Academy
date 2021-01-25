#include <stdio.h>
int main(void){
    char c;
    int nc = 0;
    while ((c = getchar()) != EOF){
        ++nc;
    }
    printf("%d\n", nc);
    return 0;
}
