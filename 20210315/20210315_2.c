/*Напишете функцията за добавяне на елемент в дървото рекурсивно
с двоен пойнтер подаван като параметър:
void insertKey(int x, struct tree **T)*/

#include <stdlib.h>
#include <stdio.h>

typedef struct treeNode_t treeNode_t;
typedef struct treeNode_t{
    int data;
    treeNode_t *left;
    treeNode_t *right;
} treeNode_t;

void insertKey(int x, treeNode_t ** tree){
    treeNode_t *temp = NULL;
    if(!(*tree)){
        temp = (treeNode_t *)malloc(sizeof(treeNode_t));
        temp->left = temp->right = NULL;
        temp->data = x;
        *tree = temp;
        return;
    }

    if(x < (*tree)->data){
        insertKey(&(*tree)->left, x);
    }
    else if(x > (*tree)->data){
        insertKey(&(*tree)->right, x);
    }
}
