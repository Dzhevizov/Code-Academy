/*Напишете функцията size_t my_strlen(char *s), която връща
дължината на стринга подаден в нея. Итерирайте по масива докато стигнете
знака за край на стринг '\0'. Увеличавайте в една променлива от тип size_t
стойността и за всяка итерация.size_t обикновено е unsignet long int като
размер. Върнете променливата като резултат от функцията.*/

#include <stdio.h>

size_t my_strlen(char *s){
    size_t x = 0ul;
    for ( ; *s != '\0'; s++){
        x++;
    }
    return x;
}

int main(){
    char s[] = "Hello world";
    printf("%lu\n", my_strlen(s));
    return 0;
}
