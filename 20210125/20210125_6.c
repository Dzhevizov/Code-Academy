#include <stdio.h>

int main(void){
    char c;
    int symbols = 0;
    int letters = 0;
    int digits = 0;
    while ((c = getchar ()) != EOF){
        ++symbols;
        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
            ++letters;
        }
        if (c < '0' || c > '9')continue;
            ++digits;
    }
    printf("Total symbols: %d\n", symbols);
    printf("Letters: %d\n", letters);
    printf("Digits: %d\n", digits);
    return 0;
}
