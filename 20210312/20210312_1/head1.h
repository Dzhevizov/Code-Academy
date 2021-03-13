#include <stdio.h>
#include <stdlib.h>

typedef struct t_node t_node;

typedef struct t_node
{
    int m_nValue;
    t_node *m_pNext;
} t_node;

extern t_node *start;

void init();

int add(int data);

int addAfter(int n, int k);

int dellFirst(int *n);

t_node *dellElemReturnAfter(int *n, int k);

void printList();
