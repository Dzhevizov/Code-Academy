/*  _ _  _  _  _  _  _  _
    9 10 11 12 13 14 15 16
    1 2  3  4  5  6  7  8
Да се състави програма, с помощта на която играч може да
играе (с право на връщане на ходовете) следната игра СОЛИТЕР:
На игралното поле са поставени 16 номерирани пулове и три реда
с по осем позиции. Целта е да се извадят от игра всички пулове с
изключение на номер 1. Може да се прескача през някой пул на
свободна клетка, но не се разрешава движение по диагонал.
Например възможни са ходове 1-9; 2-10; 1-2 и т.н. По тази схема 1
прескача 9 и 9х излиза от игра – отстранява се от полето, след
това 2 прескача 10 и 10 отпада от играта; по-нататък 1 прескача 2 и
2 излиза от игра.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int solitare[3][8] = {0, 0, 0, 0, 0, 0, 0, 0,
                          9, 10, 11, 12, 13, 14, 15, 16,
                          1, 2, 3, 4, 5, 6, 7, 8};

    int *ptr = (int *)solitare;
    
    int diff = 0;

start:
    diff = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            printf("%d ", *(ptr + 8 * i + j));
            if ((*(ptr + 8 * i + j) != 1) && (*(ptr + 8 * i + j) != 0))
            {
                diff++;
            }
        }
        printf("\n");
    }

    if (diff == 0)
    {
        printf("Congrats! You won!\n");
        return 0;
    }

    int pull = 0;
    choose_pull:

    printf("Choose a pull\n");
    scanf("%d", &pull);
    int match = 0;
    int n = 0;
    int m = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            if (pull == *(ptr + 8 * i + j))
            {
                match++;
                n = i;
                m = j;
                break;
            }
        }
    }
    if (match > 0)
    {
        int direction;
        choose_direction:

        printf("Choose a direction\n");
        printf("8 for up; 4 for left; 6 for right; 2 for down; 0 to undo last choice\n");
        scanf("%d", &direction);
        switch (direction)
        {
        case 8:
            if ((*(ptr + 8 * (n - 2) + m) == 0) && (*(ptr + 8 * (n - 1) + m) != 0))
            {
                *(ptr + 8 * (n - 2) + m) = pull;
                *(ptr + 8 * (n - 1) + m) = 0;
                *(ptr + 8 * n + m) = 0;
                goto start;
            }
            else
            {
                printf("Invalid direction\n");
                goto choose_direction;
            }
            break;
        case 2:
            if (*(ptr + 8 * (n + 2) + m) == 0 && *(ptr + 8 * (n + 1) + m) != 0)
            {
                *(ptr + 8 * (n + 2) + m) = pull;
                *(ptr + 8 * (n + 1) + m) = 0;
                *(ptr + 8 * n + m) = 0;
                goto start;
            }
            else
            {
                printf("Invalid direction\n");
                goto choose_direction;
            }
            break;
        case 4:
            if (*(ptr + 8 * n + (m - 2)) == 0 && *(ptr + 8 * n + (m - 1)) != 0)
            {
                *(ptr + 8 * n + (m - 2)) = pull;
                *(ptr + 8 * n + (m - 1)) = 0;
                *(ptr + 8 * n + m) = 0;
                goto start;
            }
            else
            {
                printf("Invalid direction\n");
                goto choose_direction;
            }
            break;
        case 6:
            if (*(ptr + 8 * n + (m + 2)) == 0 && *(ptr + 8 * n + (m + 1)) != 0)
            {
                *(ptr + 8 * n + (m + 2)) = pull;
                *(ptr + 8 * n + (m + 1)) = 0;
                *(ptr + 8 * n + m) = 0;
                goto start;
            }
            else
            {
                printf("Invalid direction\n");
                goto choose_direction;
            }
            break;
        case 0:
            goto choose_pull;

        default:
            printf("Invalid direction\n");
            goto choose_direction;
            break;
        }
    }
    else
    {
        printf("Invalid choice\n");
        goto choose_pull;
    }

    return 0;
}
