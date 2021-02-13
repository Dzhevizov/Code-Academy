/*Използвайки предишното упражнение, изведете участниците
подредени по азбучен ред.*/
/*На предната задача цикълът ми се чупи и затова тук използвам
алтернативен метод за въвеждане на имената на участниците, за
да имам все пак списък с имена, който да сортирам тук.*/

#include <stdio.h>
#include <string.h>
int main(){
    int i, j, count;
    char str[25][25], temp[25];
    printf("How many participants are there?:\n");
    scanf("%d", &count);

    printf("Enter name and familyname of all participants:\n");
    for (i = 0; i <= count; i++)
        gets(str[i]);
    for (i = 0; i <= count; i++)
        for (j = i + 1; j <= count; j++)
        {
            if (strcmp(str[i], str[j]) > 0)
            {
                strcpy(temp, str[i]);
                strcpy(str[i], str[j]);
                strcpy(str[j], temp);
            }
        }
    printf("Order of Sorted Strings:");
    for (i = 0; i <= count; i++)
        puts(str[i]);

    return 0;
}
