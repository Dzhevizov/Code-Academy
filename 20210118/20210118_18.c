#include <stdio.h>
#include <unistd.h>

void bin();

int main(){
    unsigned int A = 1;
    int i = 1;
    
    bin (A);
    while (A != 0)
    {
        
        A <<= i;
        unsigned seconds;
        seconds = 1;
        sleep (seconds);
        bin (A);
          
    }
    return 0;
}

void bin(unsigned n) 
{ 
	unsigned i; 
	for (i = 1 << 31; i > 0; i = i >> 1 ) 
		(n & i)? printf("1"): printf("0"); 
	printf("\n");
}
