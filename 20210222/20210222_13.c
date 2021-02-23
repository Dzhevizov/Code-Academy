/*Направете обединение с членове unsigned short и char. Ограничете
използваните битове до 6. Инициализирайте и изведете на
конзолата.
union <tagUnion> {
Ctype m_bitField : N;
};*/

#include <stdio.h>

union data {
    unsigned short int data1 : 6;
    char data2 : 6;
};

int main(){
    union data value = {60};
    printf("size of union: %d\n", sizeof(value)); /* 2 */
    printf("data1 : %d\n", value.data1); /* 60 */
    printf("data2 : %d\n", value.data2); /* -4 */
    return 0;
}
