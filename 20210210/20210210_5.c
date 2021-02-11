/* Пренапишете функцията за сумиране елементите на масив
използвайки пойнтер аритметика вместо инкрементиращa променливa i:*/
#include <stdio.h>
#include <string.h>
int sum_array(const int a[], int n)
{
    int i, sum = 0;
    for (i = 0; i < n; i++)
    {
        sum += a[i];
        return sum;
    }
}
int sum_arr(const int a[], int n){
    int* p;
    p = a;
    int sum = 0;
    for ( ; p < p + n; p++){
        sum += *p;
        return sum;
    }
}
/*Пренапишете алгоритъма за сортиране без да използвате
инкрементиращи променливи.*/
void sort(int a[], int n){
    int i, j, temp;
    for (i = 0; i < n - 1; ++i)
        for (j = i + 1; j < n; ++j)
            if (a[i] > a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
}
void sort1(int a[], int n){
    int *p;
    int *q;
    p = a;
    q = &a[1];
    int temp;
    for ( ;p < p + n; ++p){
        for ( ;q < q + n; ++q){
            if (*p > *q){
            temp = *p;
            *p = *q;
            *q = temp;
            }
        }
        
    } 
}

int main(){
    int a[10] = {4,6,2,8,3,1,5,7,9,0};
    int res;
    res = sum_array(a,10);
    printf("%d\n", res);
    res = sum_arr(a,10);
    printf("%d\n",res);
    sort(a,10);
    for (int i = 0; i < 10; i++){
        printf("%d", a[i]);
    }
    printf("\n");
    int b[10] = {4,6,2,8,3,1,5,7,9,0};
    sort1(b,10);
    for (int i = 0; i < 10; i++){
        printf("%s\n", b);
    }
    
    return 0;
}
