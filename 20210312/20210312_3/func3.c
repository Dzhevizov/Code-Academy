#include "head3.h"

void init(){
    start = NULL;
}

int add(int data){
    t_node *p = start;
    start = (t_node *)malloc(sizeof(t_node));
    if (!start)
        return -1;
    start->m_nValue = data;
    start->m_pNext = p;
    return 0;
}

void printList(){
    t_node *p = start;
    while (p != NULL){
        printf("%d, ", p->m_nValue);
        p = p->m_pNext;
    }
    printf("\n");
}

int findFifthElem(){
    int count = 1;
    t_node *q;
    t_node *p = start;
    q = (t_node *)malloc(sizeof(t_node));
    while (p->m_pNext != NULL){
        p = p->m_pNext;
        count++;
        if (count == 5){
            q = start;
        }
        else if(count > 5){
            q = q->m_pNext;
        }
    }
    return q->m_nValue;
}
