#include <stdio.h>
int main(void){
    char c;
    c = getchar();
    int nl = 0;
    int nt = 0;
    int ns = 0;
    while ((c = getchar()) != EOF){
        if (c == '\n'){
            ++nl;
        }
        if (c == '\t'){
            ++nt;
        }
        if (c == ' '){
            ++ns;
        } 
    }
    printf("New lines: %d\n", nl);
    printf("Tabs: %d\n", nt);
    printf("Spaces: %d\n", ns);
    return 0;
}
