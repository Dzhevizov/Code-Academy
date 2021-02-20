/*Направете функця add(), която събира две точки.*/

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
    int i = 5;
    int j = 10;
    int k = 7;
    int l = 12;
    struct point a = makepoint(i,j);
    struct point b = makepoint(k,l);
    struct point c = add(a,b);

    printf("point c.x = %d\n", c.x);
    printf("point c.y = %d\n", c.y);
    return 0;
}
