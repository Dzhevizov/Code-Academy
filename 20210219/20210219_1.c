/*Дефиниране на структура, достъп до членове*/

#include <stdio.h>
#include <string.h>

struct tagPaper{
    unsigned m_nBookId;
    char m_szTitle[64];
    char m_szAuthor[64];
    char m_szSubject[256];
};

int main(){
    struct tagPaper paper1;
    paper1.m_nBookId = 202530;
    strcpy(paper1.m_szTitle, "The Hunger games");
    strcpy(paper1.m_szAuthor, "Suzanne Collins");
    strcpy(paper1.m_szSubject, "Young adult fiction");
    printf("\nPaper id : %d\n", paper1.m_nBookId);
    printf("Paper title : %s\n", paper1.m_szTitle);
    printf("Paper author : %s\n", paper1.m_szAuthor);
    printf("Paper subject : %s\n", paper1.m_szSubject);

    struct tagPaper paper2 = {136666, "The Da Vinci Code", "Dan Brown", "Crime Thriller"};
    printf("\nPaper id : %d\n", paper2.m_nBookId);
    printf("Paper title : %s\n", paper2.m_szTitle);
    printf("Paper author : %s\n", paper2.m_szAuthor);
    printf("Paper subject : %s\n", paper2.m_szSubject);

    struct tagPaper paper3 = {.m_szAuthor = "Nicholas Sparks", .m_szTitle = "A Walk to Remember",
     .m_szSubject = "Romance", .m_nBookId = 171819};
    printf("\nPaper id : %d\n", paper3.m_nBookId);
    printf("Paper title : %s\n", paper3.m_szTitle);
    printf("Paper author : %s\n", paper3.m_szAuthor);
    printf("Paper subject : %s\n", paper3.m_szSubject);
    
    return 0;
}
