/*Намерете позицията си във файла.
long ftell(FILE *pfile);
Функцията приема указател към файла като параметър и връща long
int, който отговаря на позицията във файла.
Дефинирате променлива
long fpos = ftell(pfile)
Променливата съхранява текущата ви позицията в байтове от
началото на файла и вие можете да се върнете на нея по всяко
време.*/

#include <stdio.h>

int main(){
    FILE *fp = NULL;
    fp = fopen("test.txt", "wt+");
    fputs("first string\n", fp);
    fputs("second string\n", fp);
    long ftell(FILE *fp);
    long fpos = ftell(fp);
    printf("%ld\n", fpos);
    fclose(fp);
    return 0;
}
