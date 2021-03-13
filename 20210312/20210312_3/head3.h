#include <stdio.h>
#include <stdlib.h>

typedef struct t_node t_node;

typedef struct t_node{
    int m_nValue;
    t_node *m_pNext;
} t_node;

extern t_node *start;

void init();

int add(int data);

void printList();

int findFifthElem();
