/*Инициализиране на структура, вложени структури*/

#include <stdio.h>
#include <string.h>
#define BUFSIZ 512

struct tagDetail{
    unsigned m_uAcadId;
    char m_szAcadName[BUFSIZ];
    char m_szAcadUrl[BUFSIZ];
};
struct tagCadet{
    unsigned m_uCadetId;
    char m_CadetName[BUFSIZ];
    float m_uAverageRating;
    struct tagDetail m_detail;
};

int main(){
    struct tagCadet cadet = {1, "Ivan Ivanov", 5.52, {13, "Code Academy", "https://codeacademy.bg"}};
    printf("\nCadet Id is: %d\n", cadet.m_uCadetId);
    printf("Name is: %s\n", cadet.m_CadetName);
    printf("Rating (2-6) is: %f\n", cadet.m_uAverageRating);
    printf("Academy Id is: %d\n", cadet.m_detail.m_uAcadId);
    printf("Name is: %s\n", cadet.m_detail.m_szAcadName);
    printf("URL is: %s\n", cadet.m_detail.m_szAcadUrl);

    struct tagCadet cadet2 = {.m_CadetName = "Dragan Petrov", .m_uCadetId = 2, .m_uAverageRating = 4.80,
    .m_detail = {.m_szAcadName = "Code Academy", .m_szAcadUrl = "https://codeacademy.bg", .m_uAcadId = 13}};
    printf("\nCadet Id is: %d\n", cadet2.m_uCadetId);
    printf("Name is: %s\n", cadet2.m_CadetName);
    printf("Rating (2-6) is: %f\n", cadet2.m_uAverageRating);
    printf("Academy Id is: %d\n", cadet2.m_detail.m_uAcadId);
    printf("Name is: %s\n", cadet2.m_detail.m_szAcadName);
    printf("URL is: %s\n", cadet2.m_detail.m_szAcadUrl);

    struct tagCadet cadet3 = {3, "Stoyan Stefanov", 5.25, {13, "Code Academy", "https://codeacademy.bg"}};
    printf("\nCadet Id is: %d\n", cadet3.m_uCadetId);
    printf("Name is: %s\n", cadet3.m_CadetName);
    printf("Rating (2-6) is: %f\n", cadet3.m_uAverageRating);
    printf("Academy Id is: %d\n", cadet3.m_detail.m_uAcadId);
    printf("Name is: %s\n", cadet3.m_detail.m_szAcadName);
    printf("URL is: %s\n", cadet3.m_detail.m_szAcadUrl);

    return 0;
}
