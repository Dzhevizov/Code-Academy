/*Напишете един глобален масив, който съдържа на всяка позиция броя на
дните от месеца. Направете функция, която на която се подават като
аргументи година, месец и ден. На база на това функцията трябва да върне
поредния ден от годината. Например 1 март е 60 тия ден от годината.*/

#include <stdio.h>
#include <stdlib.h>

int isLeap(int year){
    if (year % 400 == 0){
        return 1;
    }
    else if (year % 100 == 0){
        return 0;
    }
    else if (year % 4 == 0){
        return 1;
    }
    else{
        return 0;
    }
}

int countNotLeapDay(int month, int day){
    
    int months[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
    int dayno[12][31];

    int dref = 0;
    int j,k;

    for (k=0; k<12; k++) {
        for (j=0; j<months[k]; j++) {
            dayno[k][j] = ++dref;
        }
    }

    return dayno[month-1][day-1];
}

int countLeapDay(int month, int day){
    
    int months[12] = {31,29,31,30,31,30,31,31,30,31,30,31};
    int dayno[12][31];

    int dref = 0;
    int j,k;

    for (k=0; k<12; k++) {
        for (j=0; j<months[k]; j++) {
            dayno[k][j] = ++dref;
        }
    }

    return dayno[month-1][day-1];
}

int main(int argc, char const *argv[]){
    int year = atoi(argv[1]);
    int month = atoi(argv[2]);
    int day = atoi(argv[3]);
    int countDay = 0;
    
    if (isLeap(year) == 0){
        if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12){
            if (day >= 1 && day <= 31){
                printf("This is day %d of the year.\n", countNotLeapDay(month,day));
            }
            else{
                printf("Invalid day\n");
                return 1;
            }
        }
        else if (month == 4 || month == 6 || month == 9 || month == 11){
            if (day >= 1 && day <= 30){
                printf("This is day %d of the year.\n", countNotLeapDay(month,day));
            }
            else{
                printf("Invalid day\n");
                return 1;
            }
        }
        else if (month == 2){
            if (day >= 1 && day<= 28){
                printf("This is day %d of the year.\n", countNotLeapDay(month,day));
            }
            else{
                printf("Invalid day\n");
                return 1;
            }
        }
        else{
            printf("Invalid month\n");
            return 2;
        }
        
    }
    else if (isLeap(year) == 1){
        if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12){
            if (day >= 1 && day <= 31){
                printf("This is day %d of the year.\n", countLeapDay(month,day));
            }
            else{
                printf("Invalid day\n");
                return 1;
            }
        }
        else if (month == 4 || month == 6 || month == 9 || month == 11){
            if (day >= 1 && day <= 30){
                printf("This is day %d of the year.\n", countLeapDay(month,day));
            }
            else{
                printf("Invalid day\n");
                return 1;
            }
        }
        else if (month == 2){
            if (day >= 1 && day<= 29){
                printf("This is day %d of the year.\n", countLeapDay(month,day));
            }
            else{
                printf("Invalid day\n");
                return 1;
            }
        }
        else{
            printf("Invalid month\n");
            return 2;
        }
    }
    return 0;
}
