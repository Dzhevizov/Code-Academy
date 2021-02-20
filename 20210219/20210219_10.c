/*Направете два триъгълника с отместване.*/

#include <stdio.h>

struct point {
    int x;
    int y;
};

struct point makepoint(int a, int b){
    struct point result;
    result.x = a;
    result.y = b;
    return result;
}

struct point add(struct point a, struct point b){
    struct point result;
    result.x = a.x + b.x;
    result.y = a.y + b.y;
    return result;
}

int main(){
    struct point a = makepoint(0,0);
    struct point b = makepoint(5,5);
    struct point x = makepoint(0,10);

    struct point c = add(a,x);
    struct point d = add(b,x);

    printf("point c.x = %d\n", c.x);
    printf("point c.y = %d\n", c.y);
    printf("point d.x = %d\n", d.x);
    printf("point d.y = %d\n", d.y);

    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 15; j++){
            if ((i >= a.x && i <= b.x) && ((j >= a.y && j <= a.y + i - a.x) ||(j >= c.y && j <= c.y + i))){
                printf("*");
            }
            else
            {
                printf(" ");
            }
            
            
        }
        printf("\n");
    }

    return 0;
}
