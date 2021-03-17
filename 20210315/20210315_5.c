/*Да се напише рекурсивен вариант на
функцията за обхождане на двоично дърво.*/

#include <stdio.h>

typedef struct treeNode_t treeNode_t;
typedef struct treeNode_t
{
    int data;
    treeNode_t *left;
    treeNode_t *right;
} treeNode_t;

treeNode_t *search_rec(treeNode_t *t, int n){
    if (t != NULL)
        if (t->data < n)
            t = search_rec(t->right, n);
        else if (t->data > n)
            t = search_rec(t->left, n);
    return t;
}
