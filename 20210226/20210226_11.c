/*тайпдефната структура node, съдържаща един член от
тип инт и един пойнтер към тип самата структура. Заделете динамично
памет за тази структура с malloc по описания по-горе начин.*/

#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    int x;
    struct node *ptr;
}t_node;

int main(){
    typedef t_node *t_ptr;
    t_ptr first = (t_ptr)malloc(sizeof(t_node));
    printf("size of first: %d\n", sizeof(first));
    return 0;
}
