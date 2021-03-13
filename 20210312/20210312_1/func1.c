#include "head1.h"

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

int addAfter(int n, int k){
    t_node *q;
    t_node *p = start;
    while (p->m_nValue != k)
        p = p->m_pNext;
    q = (t_node *)malloc(sizeof(t_node));
    q->m_nValue = n;
    q->m_pNext = p->m_pNext;
    p->m_pNext = q;
    return 0;
}

int dellFirst(int *n){
    t_node *p = start;
    if (NULL != start)
    {
        *n = start->m_nValue;
        start = start->m_pNext;
        free(p);
        return 0;
    }
    else
        return 1;
}

t_node *dellElemReturnAfter(int *n, int k){
    t_node *p = start;
    t_node *q;
    while (p->m_nValue != k)
    {
        if (p->m_pNext == NULL)
        {
            return NULL;
        }
        else
        {
            q = p;
            p = p->m_pNext;
        }
    }
    *n = p->m_nValue;
    q->m_pNext = p->m_pNext;
    free(p);
    return q->m_pNext;
}

void printList(){
    t_node *p = start;
    while (p != NULL){
        printf("%d, ", p->m_nValue);
        p = p->m_pNext;
    }
    printf("\n");
}
