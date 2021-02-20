/*Направете функция struct point makepoint(int x, int y), която
създава две точки.*/

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

int main(){
    int m = 4;
    int n = 5;
    
    struct point myPoint1 = makepoint(m,n);
    printf("myPoint1.x = %d\n", myPoint1.x);
    printf("myPoint1.y = %d\n", myPoint1.y);

    struct point myPoint2 = makepoint(n,m);
    printf("myPoint2.x = %d\n", myPoint2.x);
    printf("myPoint2.y = %d\n", myPoint2.y);
    return 0;
}
