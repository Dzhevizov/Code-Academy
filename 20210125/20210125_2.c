#include <stdio.h>
int main(void)
{
    char c;
    c = getchar();
    int nl = 0;
    while (c != EOF)
    {
        c = getchar();
        if (c == '\n'){
            nl++;
        }
        
    }
    printf("%d\n", nl);
    return 0;
}
