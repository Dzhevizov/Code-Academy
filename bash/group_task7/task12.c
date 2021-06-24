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
#include <stdlib.h>
#include <math.h>
#include <ctype.h>

struct dataA {
unsigned short int data1 : 3;
unsigned char data2 : 6;
};

struct dataB {
unsigned short int data1 : 3;
unsigned char data2 : 6;
unsigned short int data3 : 4;
unsigned char data4 : 7;
};

struct dataC {
unsigned char data2 : 6;
unsigned char data4 : 7;
unsigned short int data1 : 3;
unsigned short int data3 : 4;
};

#pragma pack(1)
struct dataD {
unsigned short int data1 : 3;
unsigned char data2 : 6;
unsigned short int data3 : 4;
unsigned char data4 : 7;
};

struct dataE {
unsigned char data2 : 6;
unsigned char data4 : 7;
unsigned short int data1 : 3;
unsigned short int data3 : 4;
};

int main(int argc, char* argv[]){
    int intValue;
    char charValue;
    int intValue2;
    char charValue2;
    printf("Enter number value 1: \n");
    if ((scanf("%d", &intValue) == 0)) {
    	printf("Error: not a valid number!\n");
    	return 1;
    }
    getchar();

    printf("\nEnter character value 1: \n");
    if ((scanf("%c", &charValue) == 0)) {
    	printf("Error: not a valid character!\n");
    	return 2;
    }
    getchar();

    printf("\nEnter number value 2: \n");
    if ((scanf("%d", &intValue2) == 0)) {
    	printf("Error: not a valid number!\n");
    	return 3;
    }
    getchar();

    printf("\nEnter character value 2: \n");
    if ((scanf("%c", &charValue2) == 0)) {
    	printf("Error: not a valid character!\n");
    	return 4;
    }
    
    struct dataA value1 = {intValue, charValue};
    printf("data1: %d\n", value1.data1);  
    printf("data2: %c\n", value1.data2);  
    printf("size of struct: %ld\n", sizeof(value1)); 
    
    
    struct dataB value2 = {intValue, charValue, intValue2, charValue2};
    printf("data1: %d\n", value2.data1); 
    printf("data2: %c\n", value2.data2);
    printf("data3: %d\n", value2.data3); 
    printf("data4: %c\n", value2.data4); 
    printf("size of struct: %ld\n", sizeof(value2)); 

    struct dataC value3 = {charValue, charValue2, intValue, intValue2};
    printf("size of struct: %d\n", sizeof(value3)); 

    struct dataD value4 = {intValue, charValue, intValue2, charValue2};
    printf("size of struct: %ld\n", sizeof(value4)); 

    struct dataE value5 = {charValue, charValue2, intValue, intValue2};
    printf("size of struct: %ld\n", sizeof(value5)); 

    return 0;
}
