#include <stdio.h>

int main(){
    
    int A = 5 > 2;
    int B = 3 != 0;

    int check1 = !(A && B);
    int check2 = ! A || ! B;
    printf("%d = %d\n", check1, check2);

    check1 = !( A || B );
    check2 =  ! A && ! B;
    printf("%d = %d\n", check1, check2);

    A = 5 > 2;
    B = 3 == 0;

    check1 = !(A && B);
    check2 = ! A || ! B;
    printf("%d = %d\n", check1, check2);

    check1 = !( A || B );
    check2 =  ! A && ! B;
    printf("%d = %d\n", check1, check2);

    A = 5 < 2;
    B = 3 != 0;

    check1 = !(A && B);
    check2 = ! A || ! B;
    printf("%d = %d\n", check1, check2);

    check1 = !( A || B );
    check2 =  ! A && ! B;
    printf("%d = %d\n", check1, check2);

    A = 5 < 2;
    B = 3 == 0;

    check1 = !(A && B);
    check2 = ! A || ! B;
    printf("%d = %d\n", check1, check2);

    check1 = !( A || B );
    check2 =  ! A && ! B;
    printf("%d = %d\n", check1, check2);

    return 0;
}

