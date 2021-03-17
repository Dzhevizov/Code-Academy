/*Да се построи наредено двоично дърво за
търсене чрез последователно добавяне на следните
върхове:
а) 7, 14, 28, 35, 65, 12, 18, 42, 81, 64, 61, 4, 13
б) 12, 7, 14, 81, 42, 18, 61, 4, 64, 35, 13, 28, 65
в) 4, 7, 12, 13, 14, 18, 28, 35, 42, 61, 64, 65, 81
г) 81, 65, 64, 61, 42, 35, 28, 18, 14, 13, 12, 7, 4
д) 28, 64, 13, 42, 7, 81, 61, 4, 12, 65, 35, 18, 14
Да се сравнят получените дървета. Какви изводи могат
да се направят?*/

#include "tree.h"
#define SIZE 13

treeNode_t *root1 = NULL, *z1;
treeNode_t *root2 = NULL, *z2;
treeNode_t *root3 = NULL, *z3;
treeNode_t *root4 = NULL, *z4;

int main(void){
    int i;
    int arr1[SIZE] = {7,14,28,35,65,12,18,42,81,64,61,4,13};
    int arr2[SIZE] = {12,7,14,81,42,18,61,4,64,35,13,28,65};
    int arr3[SIZE] = {81,65,64,61,42,35,28,18,14,13,12,7,4};
    int arr4[SIZE] = {28,64,13,42,7,81,61,4,12,65,35,18,14};

    for(i = 0; i < SIZE; i++)
        insert1(arr1[i]);
    z1 = root1;
    printf("\nroot1 = %d\n", z1->data);
    preorder(z1);

    for(i = 0; i < SIZE; i++)
        insert2(arr2[i]);
    z2 = root2;
    printf("\nroot2 = %d\n", z2->data);
    preorder(z2);

    for(i = 0; i < SIZE; i++)
        insert3(arr3[i]);
    z3 = root3;
    printf("\nroot3 = %d\n", z3->data);
    preorder(z3);
    
    for(i = 0; i < SIZE; i++)
        insert4(arr4[i]);
    z4 = root4;
    printf("\nroot4 = %d\n", z4->data);
    preorder(z4);
    
    return 0;
}
