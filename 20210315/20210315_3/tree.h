#pragma once
#include <stdio.h>
#include <stdlib.h>
typedef struct treeNode_t treeNode_t;
typedef struct treeNode_t
{
    int data;
    treeNode_t *left;
    treeNode_t *right;
} treeNode_t;

extern treeNode_t *root1;
extern treeNode_t *root2;
extern treeNode_t *root3;
extern treeNode_t *root4;

treeNode_t *insert1(int d);
treeNode_t *insert2(int d);
treeNode_t *insert3(int d);
treeNode_t *insert4(int d);
void preorder(treeNode_t *n);
