/*Напишете функците atoi, itoa, atof и reverse, които писахме
преди като използвате указател вместо индексиране на масив.*/

#include <stdio.h>
#include <stdio.h>

int isdigit();
int strrev();
int c;

int atoi(char *s){
    double n = 0;
    for (; *s != '\0'; s++)
        n = 10 * n + (*s - '0');
    return n;
}
void itoa(int n, char *s){
    int i = 0;
    do{
        *s = n % 10 + '0';
        n = n / 10;
        s++;
    }
    while (n != 0);
    *s = '\0';
}
double atof (char *s){
    double n = 0;
    double power = 1;
    for (; isdigit(*s); s++)
        n = 10 * n + (*s - '0');
    if (*s == '.')
    s++;
    for (; isdigit(*s);s++){
        n = 10 * n + (*s - '0');
        power *= 10; 
    }
    return n / power;
}

int main(){
    char s1[] = "25";
    int n1 = atoi(s1);
    printf("%d\n", n1);
    int n2 = 30;
    char s2[] = {0};
    itoa(n2,s2);
    printf("%s\n", strrev(s2));
    char s3[] = "25.78";
    double n3 = atof(s3);
    printf("%f\n", n3);
    return 0;
}
