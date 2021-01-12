#include <stdio.h>

int vzemiBitna(unsigned int,unsigned int);

int main(void){
    
    unsigned int rez=vzemiBitna(10,3);
    printf("%d\n", rez);

    return 0;

} 

int vzemiBitna(unsigned int x,unsigned int index){
    unsigned int mask=1;
    x=x>>index;
    unsigned int y=x&mask;
    return y;
}
