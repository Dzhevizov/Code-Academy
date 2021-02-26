/*Представете служителите във фирма в структура с членове:
пореден номер, име, презиме, фамилия, позиция, трудов стаж в години,
заплата в лева, указател към структурата, описващ неговия началник.
Напишете програма, която въвежда 10 служителя, които се съхраняват в
масив от описаните структури. Въвеждането на служителите може да стане
на два паса, първо въвеждане на всички данни без указателя към
началника и на втори пас, указване на всеки служител кой е неговият
началник.*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct staff{
    int *number;
    char *name;
    char *fathersName;
    char *lastName;
    char *position;
    int *experience;
    double *salary;
    struct staff* boss;
} t_staff;

int main(){
    typedef t_staff *t_ptr;
    t_staff Petrov;
    t_ptr Petrov1 = (t_ptr)malloc(sizeof(t_staff));
    Petrov1 = &Petrov;
    Petrov1->number = 1582;
    Petrov1->name = "Todor";
    Petrov1->fathersName = "Slavchev";
    Petrov1->lastName = "Petrov";
    Petrov1->position = "salesman";
    Petrov1->experience = 5;
    Petrov1->salary = 1100;
    printf("%d\n", sizeof(Petrov));
    printf("%d\n", Petrov.number);
    printf("%s\n", Petrov.name);
    /*Petrov = {1582, "Todor", "Slavchev", "Petrov", "salesman", 5, 1100};
    struct staff Ivanov = {1734, "Stanislav", "Borisov", "Ivanov", "salesman", 3, 1000};
    struct staff Tonev = {1558, "Valeri", "Todorov", "Tonev", "salesman", 5, 1100};*/
    struct staff Topchiev = {1335, "Vladimir", "Yordanov", "Topchiev", "supervisior", 8, 1750};
    /*struct staff Yanev = {1496, "Yordan", "Georgiev", "Yanev", "salesman", 6, 1150};
    struct staff Stefanov = {1527, "Valentin", "Kostov", "Stefanov", "salesman", 5, 1100};
    struct staff Todorov = {1648, "Atanas", "Dimitrov", "Todorov", "salesman", 4, 1050};
    struct staff Borisov = {1662, "Boris", "Borislavov", "Borisov", "salesman", 4, 1050};
    struct staff Lambov = {1253, "Krum", "Antonov", "Lambov", "supervisior", 9, 1800};
    struct staff Dzhevizov = {1111, "Hristo", "Georgiev", "Dzhevizov", "manager", 10, 2500};*/

    Petrov1->boss = &Topchiev;
    /*Ivanov.boss = &Topchiev;
    Tonev.boss = &Topchiev;
    Topchiev.boss = &Dzhevizov;
    Yanev.boss = &Lambov;
    Stefanov.boss = &Lambov;
    Todorov.boss = &Lambov;
    Borisov.boss = &Lambov;
    Lambov.boss = &Dzhevizov;*/

    printf("Petrov boss: %s\n", Petrov.boss->lastName);
    /*printf("Ivanov boss: %s\n", Ivanov.boss->lastName);
    printf("Tonev boss: %s\n", Tonev.boss->lastName);
    printf("Topchiev boss: %s\n", Topchiev.boss->lastName);
    printf("Yanev boss: %s\n", Yanev.boss->lastName);
    printf("Stefanov boss: %s\n", Stefanov.boss->lastName);
    printf("Todorov boss: %s\n", Todorov.boss->lastName);
    printf("Borisov boss: %s\n", Borisov.boss->lastName);
    printf("Lambov boss: %s\n", Lambov.boss->lastName);*/
    return 0;
}

