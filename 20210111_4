#include <stdio.h>

int vdigniBitna(unsigned int,unsigned int);

int main(void){
    
    unsigned int rez=vdigniBitna(10,2);
    printf("%d\n", rez);

    return 0;

} 

int vdigniBitna(unsigned int x,unsigned int index){
    unsigned int mask=1;
    mask=mask<<index;
    unsigned int y=x|mask;
    return y;
}
