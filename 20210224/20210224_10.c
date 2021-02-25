/*Напишете функциите като макроси:
1. функция AVG(x, y), която смята средното аритметично на две подадени
като параметър числа.
2. функция AVG, която смята средното аритметично на числата от
определен диапазон.
3. Напишете функцията повдигане на степен, която повдига х на степен у
4. Напишете функцията TOUPPER, която прави малката буква а в голяма А
5. Напишете функцията DISP((f), (x)), която показва резултата от функции
връщащи double като корен квадратен. DISP(sqrt, 3.0)
Макрото трябва да се експандне до printf(“sqrt (%g) = %g\n”, 3.0, sqrt(3.0));*/

#include <stdio.h>
#include <math.h>
#define AVG(x,y) {(x + y) / 2}
#define my_pow(x,y) {pow(x,y)};
#define TOUPPER(a) {a - 32}
#define DISP(sqrt,x) {sqrt = sgrt(x); printf("sqrt(%g) = %g\n", x, sqrt(x));} 

int main(){
    float a = AVG(5,7);
    printf("%.2f\n", a);
    int b = my_pow(2,3);
    printf("%d\n", b);
    char d = 'a';
    printf("%c\n", (char) TOUPPER(d));

    return 0;
}
