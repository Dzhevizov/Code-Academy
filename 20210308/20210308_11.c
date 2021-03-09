/*Направете същото ползвайки fgetpos().
int fgetpos(FILE *pfile, fpos_t *position);
Първият параметър е указател към файла, вторият параметър е
указател към стандартен параметър дефиниран в stdio.h
Типа fpos_t може да запише всяка позиция във файла.
Функцията връща 0 при успех и различно от 0 при грешка.
Дефинирайте променлива за fpos_t*/

#include <stdio.h>

int main(){
    FILE *fp = NULL;
    fpos_t position;
    fp = fopen("test.txt", "wt+");
    fgetpos(fp, &position);
    printf("%d\n", position);
    fputs("first string\n", fp);
    fputs("second string\n", fp);
    fgetpos(fp, &position);
    printf("%d\n", position);
    fclose(fp);
    return 0;
}
