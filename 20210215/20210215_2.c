/**argv[ ] от горния пример е указател към низове, пренапишете
горния код като работите с указателите. Тъй като argv е указател към началото
на масив от низове, увеличаването му с 1 (++argv) ще го насочи към argv[1].
Всяко следващо увеличаване премества указателя на следващия аргумент.*/

/*#include <stdio.h>
int main(int argc, char **argv)
{
    int i;
    for (i = 0; i < argc; i++)
        printf("%s %d ", argv[i], argc);
    printf("\n");
    return 0;
}*/

#include <stdio.h>
int main(int argc, char **argv)
{
    for (argv; *argv; argv++)
        printf("%s ", *argv);
    printf("\n");
    return 0;
}
