/*Направете масив от 10 структури от задача 4. Задайте стойност на 10 -те дати, по избор.*/

#include <stdio.h>

struct date{
    int day;
    int month;
    int year;
};

int main(){
    struct date contractdates[10] = {{10,5,2020},{2,6,2020},{17,6,2020},{10,7,2020},{28,7,2020},
    {12,8,2020},{15,8,2020},{31,8,2020},{3,10,2020},{11,11,2020}};

    printf("contractdates[0]: %d.%d.%d\n", contractdates[0].day,contractdates[0].month,contractdates[0].year);
    printf("contractdates[1]: %d.%d.%d\n", contractdates[1].day,contractdates[1].month,contractdates[1].year);
    printf("contractdates[2]: %d.%d.%d\n", contractdates[2].day,contractdates[2].month,contractdates[2].year);
    printf("contractdates[3]: %d.%d.%d\n", contractdates[3].day,contractdates[3].month,contractdates[3].year);
    printf("contractdates[4]: %d.%d.%d\n", contractdates[4].day,contractdates[4].month,contractdates[4].year);
    printf("contractdates[5]: %d.%d.%d\n", contractdates[5].day,contractdates[5].month,contractdates[5].year);
    printf("contractdates[6]: %d.%d.%d\n", contractdates[6].day,contractdates[6].month,contractdates[6].year);
    printf("contractdates[7]: %d.%d.%d\n", contractdates[7].day,contractdates[7].month,contractdates[7].year);
    printf("contractdates[8]: %d.%d.%d\n", contractdates[8].day,contractdates[8].month,contractdates[8].year);
    printf("contractdates[9]: %d.%d.%d\n", contractdates[9].day,contractdates[9].month,contractdates[9].year);

    return 0;
}
