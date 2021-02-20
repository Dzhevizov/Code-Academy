/*Указатели към структура, предаване на структура на функция по
стойност и по референция*/

#include <stdio.h>
#include <string.h>

struct tagPaper{
    unsigned m_nBookId;
    char m_szTitle[64];
    char m_szAuthor[64];
    char m_szSubject[256];
};
void printPaper(struct tagPaper paper){
    printf("Paper id : %d\n", paper.m_nBookId);
    printf("Paper title : %s\n", paper.m_szTitle);
    printf("Paper author : %s\n", paper.m_szAuthor);
    printf("Paper subject : %s\n", paper.m_szSubject);
}
void printPtrPaper(struct tagPaper *pPaper){
    printf("Paper id : %d\n", pPaper->m_nBookId);
    printf("Paper title : %s\n", pPaper->m_szTitle);
    printf("Paper author : %s\n", pPaper->m_szAuthor);
    printf("Paper subject : %s\n", pPaper->m_szSubject);
}
int main()
{
    struct tagPaper myPaper = {123456, "A Song of Ice and Fire", "George R.R. Martin", "Epic fantasy"};
    printPaper(myPaper);

    printf("---\n");

    struct tagPaper myPaper2 = {102030, "Father Gorio", "Honore de Balzac", "Drama novel"};
    printPtrPaper(&myPaper2);


    return 0;
}
