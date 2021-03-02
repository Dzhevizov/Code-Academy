/*Задача 2 Създайте нов потребителски тип
към тип long long int. Използвайте го във функцията
printf, отпечатайте размера.
Задача 3. Дефинирайте потребителски тип към
указател.Създайте променлива, насочете указателя
към нея, използвайки новия потребителски тип.*/

#include <stdio.h>

typedef long long int ll_int;
typedef long long int* pll_int;

int main(){
    ll_int a = 5000000;
    ll_int b = 1000000;
    pll_int pa = &a;
    pll_int pb = &b;
    printf("size of ll_int: %d\n", sizeof(ll_int));
    printf("%lld\n", a);
    printf("%lld\n", *pa);
    
    return 0;
}
