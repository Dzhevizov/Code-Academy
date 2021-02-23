/*Напишете програма, която използва битови полета. Битовите полета да
са членове на структура и да са от следните типове: unsigned int и char.
Задайте им размер short int 3 бита, char 6 бита. struct <tagStruct> {
Ctype m_bitField : N;
CType2 m_bitField2 : M;
};
Дефинирайте променлива на структурата и инициализирайте ги със
стойност 7 и съответно ‘c’.
Разпечатайте елементите. Разпечатайте и големината на структурата.
Добавете още членове от съществуващите типове и разпечатайте
големината на структурата отново. Пренаредете ги като
последователност, да са char, char, short int, short int. Как се променя
големината на структурата?
Опитайте същото с препроцесор #pragma pack(1).*/

#include <stdio.h>

struct dataA {
unsigned short int data1 : 3;
char data2 : 6;
};

struct dataB {
unsigned short int data1 : 3;
char data2 : 6;
unsigned short int data3 : 4;
char data4 : 7;
};

struct dataC {
char data2 : 6;
char data4 : 7;
unsigned short int data1 : 3;
unsigned short int data3 : 4;
};

#pragma pack(1);
struct dataD {
unsigned short int data1 : 3;
char data2 : 6;
unsigned short int data3 : 4;
char data4 : 7;
};

struct dataE {
char data2 : 6;
char data4 : 7;
unsigned short int data1 : 3;
unsigned short int data3 : 4;
};

int main(){
    struct dataA value1 = {7, 'c'};
    printf("data1: %d\n", value1.data1);  /* 7 */
    printf("data2: %c\n", value1.data2);  /* y */
    printf("size of struct: %d\n", sizeof(value1)); /* 4 */

    struct dataB value2 = {7, 'c', 15, 'A'};
    printf("data1: %d\n", value2.data1); /* 7 */
    printf("data2: %c\n", value2.data2); /* y */
    printf("data3: %d\n", value2.data3); /* 15 */
    printf("data4: %c\n", value2.data4); /* ASCII code (193) */
    printf("size of struct: %d\n", sizeof(value2)); /* 8 */

    struct dataC value3 = {'c', 'A', 7, 15};
    printf("size of struct: %d\n", sizeof(value3)); /* 4 */

    struct dataD value4 = {7, 'c', 15, 'A'};
    printf("size of struct: %d\n", sizeof(value4)); /* 6 */

    struct dataE value5 = {'c', 'A', 7, 15};
    printf("size of struct: %d\n", sizeof(value5)); /* 4 */

    return 0;
}
