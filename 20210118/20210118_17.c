#include <stdio.h>

int main(){
    int A = 1;
    A ^= A << 13;
    printf("The first number is: %d\n", A);
    A ^= A >> 17;
    printf("The second number is: %d\n", A);
    A ^= A << 5;
    printf("The third number is: %d\n", A);

    long long int B = 1LL;
    B ^= B << 30;
    printf("The first number is: %d\n", B);
    B ^= B >> 5;
    printf("The second number is: %d\n", B);
    B ^= B << 20;
    printf("The third number is: %d\n", B);

    return 0;
}
