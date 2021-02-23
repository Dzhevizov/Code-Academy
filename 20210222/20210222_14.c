/*Напишете тип за дата, използвайки битови полета. Направете
функция, която извежда дата, използвайки новия тип. Направете
функция, която валидира датата.*/

#include <stdio.h>

struct date{
    unsigned short int day : 6;
    unsigned short int month : 4;
    unsigned short int year : 12;
};

void showDate(struct date *pDate){
    printf("Date: %d.%d.%d", pDate->day, pDate->month,pDate->year);
}

int main(){
    struct date myDate = {22,2,2021};
    showDate(&myDate);
    return 0;
}
