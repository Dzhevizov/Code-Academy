/*Дефинирайте структура “date” с членове ден, месец, година. Създайте
променлива към структурата “contractdate”. По колко начина можете да
я дефинирате?
Задайте стойност на членовете на структурата по три различни начина.*/

#include <stdio.h>

struct date{
    int day;
    int month;
    int year;
};

int main(){
    struct date contractdate1 = {22,2,2021};
    printf("contractdate1: %d.%d.%d\n", contractdate1.day,contractdate1.month,contractdate1.year);

    struct date contractdate2 = {.month = 2, .year = 2021, .day = 22};
    printf("contractdate2: %d.%d.%d\n", contractdate2.day,contractdate2.month,contractdate2.year);

    struct date contractdate3;
    contractdate3.day = 22;
    contractdate3.month = 2;
    contractdate3.year = 2021;
    printf("contractdate3: %d.%d.%d\n", contractdate3.day,contractdate3.month,contractdate3.year);

    return 0;
}
