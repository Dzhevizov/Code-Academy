/*Направете по подобен начин триъгълник*/

#include <stdio.h>

struct point {
    int x;
    int y;
};

int main(){
    for (int i = 0; i < 15; i++){
        for (int j = 0; j < 15; j++){
            printf("-");
        }
        printf("\n");
    }

    printf("\n");

    struct point a = {3,4};
    struct point b = {9,10};

    for (int i = 0; i < 15; i++){
        for (int j = 0; j < 15; j++){
            if ((i == a.x && j == a.y) || (i == b.x && j == b.y)){
                printf("@");
            }
            else {
                printf("-");
            }
        }
        printf("\n");
    }

    printf("\n");

    for (int i = 0; i < 15; i++){
        for (int j = 0; j < 15; j++){
            if ((i >= a.x && i <= b.x) && (j >= a.y && j <= a.y + i - a.x && j <= b.y)){
                printf("@");
            }
            else {
                printf("-");
            }
        }
        printf("\n");
    }
    return 0;
}
