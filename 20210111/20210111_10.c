#include <stdio.h>

int nullAfterBit(unsigned int, unsigned int);

int main(void){
    
    
    unsigned int rez=nullAfterBit(200,5);
    printf("%d\n", rez);

    return 0;

} 

int nullAfterBit(unsigned int x,unsigned int index){
    unsigned int mask = 4294967295;
    mask=mask<<index;
    mask=~mask;
    unsigned int y=x&mask;
    return y;
}
