#include <stdio.h>

int iz4istiBitna(unsigned int,unsigned int);

int main(void){
    
    unsigned int rez=iz4istiBitna(15,3);
    printf("%d\n", rez);

    return 0;

} 

int iz4istiBitna(unsigned int x,unsigned int index){
    unsigned int mask=1;
    mask=mask<<index;
    mask=~mask;
    unsigned int y=x&mask;
    return y;
}
