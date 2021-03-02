/*Представете служителите във фирма в структура с членове:
пореден номер, име, презиме, фамилия, позиция, трудов стаж в години,
заплата в лева, указател към структурата, описващ неговия началник.
Напишете програма, която въвежда 10 служителя, които се съхраняват в
масив от описаните структури. Въвеждането на служителите може да стане
на два паса, първо въвеждане на всички данни без указателя към
началника и на втори пас, указване на всеки служител кой е неговият
началник. В решението трябва да се използва динамично
заделяне на памет и typedef.*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct staff{
    int number;
    char name;
    char fathersName;
    char lastName;
    char position;
    int experience;
    double salary;
    t_staff *boss;
} t_staff;

int main(){
    typedef t_staff *t_ptr;

    t_ptr Petrov = (t_ptr)malloc(sizeof(t_staff));
    if (NULL == Petrov){
        printf("Allocation memory error\n");
        exit(1);
    }
    Petrov->number = 1582;
    Petrov->name = "Todor";
    Petrov->fathersName = "Slavchev";
    Petrov->lastName = "Petrov";
    Petrov->position = "salesman";
    Petrov->experience = 5;
    Petrov->salary = 1100;
    
    t_ptr Ivanov = (t_ptr)malloc(sizeof(t_staff));
    if (NULL == Ivanov){
        printf("Allocation memory error\n");
        exit(1);
    }
    Ivanov->number = 1734;
    Ivanov->name = "Stanislav";
    Ivanov->fathersName = "Borisov";
    Ivanov->lastName = "Ivanov";
    Ivanov->position = "salesman";
    Ivanov->experience = 3;
    Ivanov->salary = 1000;
    
    t_ptr Tonev = (t_ptr)malloc(sizeof(t_staff));
    if (NULL == Tonev){
        printf("Allocation memory error\n");
        exit(1);
    }
    Tonev->number = 1558;
    Tonev->name = "Valeri";
    Tonev->fathersName = "Todorov";
    Tonev->lastName = "Tonev";
    Tonev->position = "salesman";
    Tonev->experience = 5;
    Tonev->salary = 1100;
    
    t_ptr Topchiev = (t_ptr)malloc(sizeof(t_staff));
    if (NULL == Topchiev){
        printf("Allocation memory error\n");
        exit(1);
    }
    Topchiev->number = 1335;
    Topchiev->name = "Vladimir";
    Topchiev->fathersName = "Yordanov";
    Topchiev->lastName = "Topchiev";
    Topchiev->position = "supervisior";
    Topchiev->experience = 8;
    Topchiev->salary = 1750;
    
    t_ptr Yanev = (t_ptr)malloc(sizeof(t_staff));
    if (NULL == Yanev){
        printf("Allocation memory error\n");
        exit(1);
    }
    Yanev->number = 1496;
    Yanev->name = "Yordan";
    Yanev->fathersName = "Georgiev";
    Yanev->lastName = "Yanev";
    Yanev->position = "salesman";
    Yanev->experience = 6;
    Yanev->salary = 1150;
    
    t_ptr Stefanov = (t_ptr)malloc(sizeof(t_staff));
    if (NULL == Stefanov){
        printf("Allocation memory error\n");
        exit(1);
    }
    Stefanov->number = 1527;
    Stefanov->name = "Valentin";
    Stefanov->fathersName = "Kostov";
    Stefanov->lastName = "Stefanov";
    Stefanov->position = "salesman";
    Stefanov->experience = 5;
    Stefanov->salary = 1100;
    
    t_ptr Todorov = (t_ptr)malloc(sizeof(t_staff));
    if (NULL == Todorov){
        printf("Allocation memory error\n");
        exit(1);
    }
    Todorov->number = 1648;
    Todorov->name = "Atanas";
    Todorov->fathersName = "Dimitrov";
    Todorov->lastName = "Todorov";
    Todorov->position = "salesman";
    Todorov->experience = 4;
    Todorov->salary = 1050;
    
    t_ptr Borisov = (t_ptr)malloc(sizeof(t_staff));
    if (NULL == Borisov){
        printf("Allocation memory error\n");
        exit(1);
    }
    Borisov->number = 1662;
    Borisov->name = "Boris";
    Borisov->fathersName = "Borislavov";
    Borisov->lastName = "Borisov";
    Borisov->position = "salesman";
    Borisov->experience = 4;
    Borisov->salary = 1050;
    
    t_ptr Lambov = (t_ptr)malloc(sizeof(t_staff));
    if (NULL == Lambov){
        printf("Allocation memory error\n");
        exit(1);
    }
    Lambov->number = 1253;
    Lambov->name = "Krum";
    Lambov->fathersName = "Antonov";
    Lambov->lastName = "Lambov";
    Lambov->position = "supervisior";
    Lambov->experience = 9;
    Lambov->salary = 1800;

    t_ptr Dzhevizov = (t_ptr)malloc(sizeof(t_staff));
    if (NULL == Dzhevizov){
        printf("Allocation memory error\n");
        exit(1);
    }
    Dzhevizov->number = 1111;
    Dzhevizov->name = "Hristo";
    Dzhevizov->fathersName = "Georgiev";
    Dzhevizov->lastName = "Dzhevizov";
    Dzhevizov->position = "manager";
    Dzhevizov->experience = 10;
    Dzhevizov->salary = 2500;

    Petrov->boss = Topchiev;
    Ivanov->boss = Topchiev;
    Tonev->boss = Topchiev;
    Topchiev->boss = Dzhevizov;
    Yanev->boss = Lambov;
    Stefanov->boss = Lambov;
    Todorov->boss = Lambov;
    Borisov->boss = Lambov;
    Lambov->boss = Dzhevizov;

    printf("Petrov boss: %s\n", Petrov->boss->lastName);
    printf("Ivanov boss: %s\n", Ivanov->boss->lastName);
    printf("Tonev boss: %s\n", Tonev->boss->lastName);
    printf("Topchiev boss: %s\n", Topchiev->boss->lastName);
    printf("Yanev boss: %s\n", Yanev->boss->lastName);
    printf("Stefanov boss: %s\n", Stefanov->boss->lastName);
    printf("Todorov boss: %s\n", Todorov->boss->lastName);
    printf("Borisov boss: %s\n", Borisov->boss->lastName);
    printf("Lambov boss: %s\n", Lambov->boss->lastName);

    free (Petrov);
    free (Ivanov);
    free (Tonev);
    free (Topchiev);
    free (Yanev);
    free (Stefanov);
    free (Todorov);
    free (Borisov);
    free (Lambov);
    free (Dzhevizov);

    return 0;
}

