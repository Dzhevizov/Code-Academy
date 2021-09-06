#include <stdio.h>

int main(){
    int iX = 13;
    int iY = 44;
    int iRezult = 0;
    iRezult = iX - iY;
    printf("%d - %d = %d\n", iX, iY, iRezult);
    iRezult = iY / iX;
    printf("%d / %d = %d\n", iY, iX, iRezult);
    iRezult = iY % iX;
    printf("%d / %d Remainder: %d\n", iY, iX, iRezult);

    float fX = 3.5;
    float fY = 4.87;
    float fRezult = 0.00;
    fRezult = fX + fY;
    printf("%f + %f = %f\n", fX, fY, fRezult);
    fRezult = fX * fY;
    printf("%f * %f = %f\n", fX, fY, fRezult);

    return 0;
}
