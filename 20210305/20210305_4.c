/*Да се състави програма, с помощта на която 2
(3, 1) играчи могат да играят (с право на връщане на
ходовете) следната игра ЛАБИРИНТ: Трябва да се достигне
до финала, отбелязан с F. Числото във всяка клетка
показва броя стъпки по права линия, които могат да са
направят при следващия ход. Като се започне от горния
ляв ъгъл, са възможни само два хода
3324312
2423243
4232421
4412234
3233422
3242321
113342F*/

#include <stdio.h>
#include <stdlib.h>

struct player
{
    int x;
    int y;
};

int main(){
    int playground[7][7] = {
        3, 3, 2, 4, 3, 1, 2,
        2, 4, 2, 3, 2, 4, 3,
        4, 2, 3, 2, 4, 2, 1,
        4, 4, 1, 2, 2, 3, 4,
        3, 2, 3, 3, 4, 2, 2,
        3, 2, 4, 2, 3, 2, 1,
        1, 1, 3, 3, 4, 2, 22
    };

    int *ptr = (int*)playground;

    for (int i = 0; i < 7; i++){
        for (int j = 0; j < 7; j++){
            printf("%c ", *(ptr + 7 * i + j) + 48);
        }
        printf("\n");
    }

    struct player player1 = {0,0};
    struct player player2 = {0,0};
    
    int direction;

    player1_move:
    printf("player1 choose direction\n");
    printf("8 for up; 4 for left; 6 for right; 2 for down\n");
    scanf("%d", &direction);

    switch (direction){
        case 8:
            if ((player1.x - *(ptr + 7 * player1.x + player1.y)) >= 0){
                player1.x = player1.x - *(ptr + 7 * player1.x + player1.y);
            }
            else {
                printf("Invalid direction\n");
                goto player1_move;
            }
            break;
        case 2:
            if ((player1.x + *(ptr + 7 * player1.x + player1.y)) < 7){
                player1.x = player1.x + *(ptr + 7 * player1.x + player1.y);
            }
            else {
                printf("Invalid direction\n");
                goto player1_move;
            }
            break;
        case 4:
            if ((player1.y - *(ptr + 7 * player1.x + player1.y)) >= 0){
                player1.y = player1.y - *(ptr + 7 * player1.x + player1.y);
            }
            else {
                printf("Invalid direction\n");
                goto player1_move;
            }
            break;
        case 6:
            if ((player1.y + *(ptr + 7 * player1.x + player1.y)) < 7){
                player1.y = player1.y + *(ptr + 7 * player1.x + player1.y);
            }
            else {
                printf("Invalid direction\n");
                goto player1_move;
            }
            break;
        default:
            printf("Invalid choice\n");
            goto player1_move;
            break;
    }

    printf("player1[%d][%d]\n", player1.x, player1.y);

    if (player1.x == 6 && player1.y == 6){
        printf("player1 won!\n");
        return 0;
    }

    player2_move:
    printf("player2 choose direction\n");
    printf("8 for up; 4 for left; 6 for right; 2 for down\n");
    scanf("%d", &direction);

    switch (direction){
        case 8:
            if ((player2.x - *(ptr + 7 * player2.x + player2.y)) >= 0){
                player2.x = player2.x - *(ptr + 7 * player2.x + player2.y);
            }
            else {
                printf("Invalid direction\n");
                goto player2_move;
            }
            break;
        case 2:
            if ((player2.x + *(ptr + 7 * player2.x + player2.y)) < 7){
                player2.x = player2.x + *(ptr + 7 * player2.x + player2.y);
            }
            else {
                printf("Invalid direction\n");
                goto player2_move;
            }
            break;
        case 4:
            if ((player2.y - *(ptr + 7 * player2.x + player2.y)) >= 0){
                player2.y = player2.y - *(ptr + 7 * player2.x + player2.y);
            }
            else {
                printf("Invalid direction\n");
                goto player2_move;
            }
            break;
        case 6:
            if ((player2.y + *(ptr + 7 * player2.x + player2.y)) < 7){
                player2.y = player2.y + *(ptr + 7 * player2.x + player2.y);
            }
            else {
                printf("Invalid direction\n");
                goto player2_move;
            }
            break;
        default:
            printf("Invalid choice\n");
            goto player2_move;
            break;
    }

    printf("player2[%d][%d]\n", player2.x, player2.y);

    if (player2.x == 6 && player2.y == 6){
        printf("player2 won!\n");
        return 0;
    }
    
    goto player1_move;
}
