#include <stdio.h>

void bin(unsigned int);

int main(void){
    unsigned int x = 0;
    printf("Type a positive integer:\n");
    scanf("%d", &x);
    bin(x);
    return 0;
}
void bin(unsigned int n) { 
	unsigned int i; 
	for (i = 1 << 31; i > 0; i = i >> 1 ) 
		(n & i)? printf("1") : printf("0"); 
	printf("\n");
    return;
}
