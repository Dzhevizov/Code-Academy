/*Напишете програма, в която се въвеждат пореден номер,
име, фамилия, възраст на участници в маратон. Изискването
е за името и фамилията да не се използват масиви с
фиксирана дължина. След като въвеждането завърши,
изведете списък с участниците.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char *name = NULL;
    char *familyName = NULL;
    int age = 0;
    int number = 0;
    int size = 2;
    char c = '\0';
    int i = 0;
    int j = 0;
    char isParticipant = 'y';

    while (isParticipant == 'y')
    {
        name = (char *)malloc(size * sizeof(char));
        printf("Enter name of participant:\n");
        while ((c = getchar()) != '\n')
        {
            name[i] = c;
            i++;
            if (i == size - 1)
            {
                size *= 2;
                name = realloc(name, size);
            }
        }
        familyName = (char *)malloc(size * sizeof(char));
        printf("Enter familyname of participant:\n");
        while ((c = getchar()) != '\n')
        {
            familyName[j] = c;
            j++;
            if (j == size - 1)
            {
                size *= 2;
                familyName = realloc(familyName, size);
            }
        }
        printf("Enter age of participant:\n");
        scanf("%d", &age);
        printf("Enter number of participant\n");
        scanf("%d", &number);

        name[i] = '\0';
        familyName[j] = '\0';
        printf("%d %s %s %d\n", number, name, familyName, age);
        free(name);
        free(familyName);

        printf("Are there more participant? (y/n)");
        scanf("%s", &isParticipant);
    }
    return 0;
}
