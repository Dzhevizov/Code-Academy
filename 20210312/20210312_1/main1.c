/*Реализация на списък. Напишете програма, която добавя и 
изтрива елемент от списък по позиция в списъка. Използвайте следния 
елемент на динамичния списък:
typedef struct t_node { 
int m_nValue; 
t_node* m_pNext; 
} t_node;*/

#include "head1.h"

t_node *start;

int main(){
    init();
    add(5);
    add(10);
    add(15);
    add(20);
    printList();
    addAfter(17, 15);
    printList();
    int x;
    dellElemReturnAfter(&x,10);
    printList();
    dellFirst(&x);
    printList();
    return 0;
}
