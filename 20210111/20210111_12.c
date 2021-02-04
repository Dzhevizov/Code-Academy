#include <stdio.h>

int vdigniBit(unsigned int);

int main(void){
    
   unsigned int rez = vdigniBit(130);
   printf("%d\n", rez);
  
    return 0;

} 

int vdigniBit(unsigned int x){
    unsigned int mask = 73;
    unsigned int y=x|mask;
    return y;
}



