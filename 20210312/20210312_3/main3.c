/*Направете едносвързан списък, съдържащ числата 1-14 и 
принтирайте петия елемент от края му.*/

#include "head3.h"

t_node *start;

int main(){
    init();
    for (int i = 1; i <= 14; i++){
        add(i);
    }
    printList();
    int x;
    x = findFifthElem();
    printf("x = %d\n", x);
    return 0;
}
