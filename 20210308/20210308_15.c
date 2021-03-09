/*Напишете програма, която печата съдържанието на файл в обратен
ред.
Използвайте fseek функцията, за да отидете накрая на файла.
Използвайте ftell функцията, за да намерите позицията на пойнтера.
Покажете на екран файла, обърнат в обратен ред.*/

#include <stdio.h>

int main(){
    int i = 0;
    int pos = 0;
    FILE *fp;

    fp = fopen("file.txt", "r+");
    fseek(fp, i, SEEK_END);
    pos = ftell(fp);
    printf("%d\n", pos);
    if (NULL != fp){

        for (;;){
            char c = 0;
            fseek(fp, i, SEEK_END);
            fscanf(fp, "%c", &c);
            i--;
            printf("%c", c);
            if ((pos + i + 1) == 0)
                break;
        }
    }

    fclose(fp);

    return (0);
}
