/*Направете структура struct rect, която съдържа в себе си две
точки. Създайте обект от тип тази структура наречен screen. Използвайте
функцията makepoint за да зададете начална точка на екрана (0, 0) и
крайна точка (15, 15). Запълнете пространството между тях с тирета.*/

#include <stdio.h>

struct point {
    int x;
    int y;
};

struct rect {
    struct point a;
    struct point b;
};

struct point makepoint(int a, int b){
    struct point result;
    result.x = a;
    result.y = b;
    return result;
}

int main (){
    struct point a = makepoint(0,0);
    struct point b = makepoint(15,15);

    struct rect screen = {a,b};

    for (int i = screen.a.x; i < screen.b.x; i++){
        for (int j = screen.a.y; j < screen.b.y; j++){
            printf("-");
        }
        printf("\n");
    }

    return 0;
}
