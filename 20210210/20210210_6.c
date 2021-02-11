/*Пренапишете функцията int linear_search(const int a[], int n, int
key); използайки пойнтер аритмртиката без инкрементиращи променливи.*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int linSearch(int a[], int n, int key){
    int j = 0;
    int* p;
    int* q;
    p = a;
    q = a;
    for (; p < p + (int)malloc(strlen(a)); p++){
        if (*p == key){
            printf("%d\n", p - q);
            j++;
        }
    }
    if (j == 0){
        printf("-1\n");
    }
}

int main (){
    int a[10] = {5,8,3,6,4,6,8,2,3,5};
    int key = 6;
    linSearch(a,10,key);
    return 0;
}
