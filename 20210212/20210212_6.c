/*Заделете динамично с malloc памет за char* buffer с размер size = 2,
въвеждайте символи от конзолата с getchar() ги четете, записвайте ги в
буфера. Увеличавайте размера на буфера преди да се препълни с
realloc().
Прекъснете цикъла с Ctrl + Z. Принтирайте буфера и освободете паметта.*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    char *buffer = NULL;
    int size = 2;
    char c = '\0';
    int i = 0;

    buffer = (char*)malloc(size * sizeof(char));
    while ((c = getchar()) != EOF){
        buffer[i] = c;
        i++;
        if (i == size - 1){
            size *= 2;
            buffer = realloc(buffer,size);
        }
    }

    buffer[i] = '\0';
    printf("%s\n", buffer);
    free(buffer);
    return 0;
}
