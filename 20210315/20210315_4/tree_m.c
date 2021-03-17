/*Да се изтрият в този ред върховете 1, 7, 12 и
14 от дървото на 6,5,10,3,8,13,1,7,11,14,12*/

#include "tree.h"
#define SIZE 11
treeNode_t *root = NULL, *z;
int main(void){
    int i;
    int arr[SIZE] = {6,5,10,3,8,13,1,7,11,14,12};
    for(i = 0; i < SIZE; i++)
        insert(arr[i]);
    z = root;
    printf("\n%d\n", z->data);
    preorder(z);
    del(3);
    del(8);
    del(11);
    del(13);
    printf("\n");
    preorder(z);
    return 0;
}
