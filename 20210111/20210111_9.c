#include <stdio.h>

int nullPos(unsigned int);

int main(void){
    
    
    unsigned int rez=nullPos(4095);
    printf("%d\n", rez);

    return 0;

} 

int nullPos(unsigned int x){
    unsigned int mask = 248;
    mask=~mask;
    unsigned int y=x&mask;
    return y;
}
