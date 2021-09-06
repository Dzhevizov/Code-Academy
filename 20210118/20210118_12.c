#include <stdio.h>

int main(){
    int nX, nY;
    scanf("%d", &nX);
    scanf("%d",&nY);
    if (nX == nY){
        printf("%d and %d are equal\n", nX, nY);
    }
    else{
        printf("%d and %d are not equal\n", nX, nY);
    }
    if (nX > nY){
        printf("%d is greater than %d\n", nX, nY);
    }
    if (nX < nY){
        printf("%d is smaller than %d\n", nX, nY);
    }
    if (nX >= nY){
        printf("%d is equal or greater than %d\n", nX, nY);
    }
    if (nX <= nY){
        printf("%d is equal or smaller than %d\n", nX, nY);
    }
    if (nX != nY){
        printf("%d and %d are not equal\n", nX, nY);
    }
    return 0;
}
