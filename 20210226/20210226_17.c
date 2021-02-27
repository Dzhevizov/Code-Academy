/*Кое е по добре да купите: А броя дини от сорт мелон с диаметър Х сантиметра
и дебелина на кората D сантиметър или В броя дини с диаметър У сантиметра и
същата дебелина на кората D2? Създайте структура диня с два елемента -
диаметър и дебелина на кората заделете динамично с malloc() за масив от А на
брой дини от сорт мелон и попълнете данните за диаметър между 15 и 140 см с
функцията rand(), за всяка една диня в масива и дебелина на кората между 0.5 и
3.5 см. Създайте структура диня с два елемента - диаметър и дебелина на кората
заделете динамично с malloc() за масив от В на брой дини от сорт пъмпкин и
попълнете данните за диаметър между 35 и 95 см с функцията rand(), за всяка
една диня в масива и дебелина на кората между 0.3 и 0.9 см. Намерете средната
големина на динята и средната дебелина на кората и ги съпоставете с тези от
втория масив. Изведете на екрана купчината от кой сорт е по добре да се купи.
Изход:
По-добре е да се купят ... дини с диаметър ... сантиметра и кора с дебелина D
см вместо ... дини с диаметър ... см и дебелина на кората D1 см.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct watermelon {
    int diameter;
    float peelThickness;
} t_watermelon;

int main(){
    srand(time(NULL));
    int numWatermelonA = 0;
    int numWatermelonB = 0;
    printf("How many watermelons of type melon there are?\n");
    scanf("%d", &numWatermelonA);
    printf("How many watermelons of type pumpkin there are?\n");
    scanf("%d", &numWatermelonB);
    
    typedef t_watermelon *t_pWatermelon;
    t_pWatermelon pMelon = (t_pWatermelon)malloc(sizeof(t_watermelon) * numWatermelonA);
    if (NULL == pMelon){
        printf("Allocation memory error\n");
        exit(1);
    }
    t_pWatermelon pPumpkin = (t_pWatermelon)malloc(sizeof(t_watermelon) * numWatermelonB);
    if (NULL == pPumpkin){
        printf("Allocation memory error\n");
        exit(1);
    }

    int sumDiameterA = 0;
    float sumPeelThicknessA = 0;
    int sumDiameterB = 0;
    float sumPeelThicknessB = 0;

    for (int i = 0; i < numWatermelonA; i++){
        (pMelon + i)->diameter = rand() % 126 + 15;
        sumDiameterA += (pMelon + i)->diameter;
        (pMelon + i)->peelThickness = rand() % 31 * 0.1 + 0.5;
        sumPeelThicknessA += (pMelon + i)->peelThickness;
    }

    for (int i = 0; i < numWatermelonB; i++){
        (pPumpkin + i)->diameter = rand() % 61 + 35;
        sumDiameterB += (pPumpkin + i)->diameter;
        (pPumpkin + i)->peelThickness = rand() % 7 * 0.1 + 0.3;
        sumPeelThicknessB += (pPumpkin + i)->peelThickness;
    }

    float averageDiameterA = 0;
    float averageDiameterB = 0;
    float averagePeelThicknessA = 0;
    float averagePeelThicknessB = 0;
    float eatablePartA = 0;
    float eatablePartB = 0;

    averageDiameterA = (float)sumDiameterA / numWatermelonA;
    averageDiameterB = (float)sumDiameterB / numWatermelonB;
    averagePeelThicknessA = sumPeelThicknessA / numWatermelonA;
    averagePeelThicknessB = sumPeelThicknessB / numWatermelonB;
    eatablePartA = sumDiameterA - sumPeelThicknessA;
    eatablePartB = sumDiameterB - sumPeelThicknessB;

    if (eatablePartA > eatablePartB){
        printf("It is better to buy %d watermelons type melon with diameter %.2f sm and peelthickness %.2f sm instead of %d watermelons type pumpkin with diameter %.2f sm and peelthickness %.2f sm\n", 
        numWatermelonA, averageDiameterA, averagePeelThicknessA, numWatermelonB, averageDiameterB, averagePeelThicknessB);
    }
    else {
        printf("It is better to buy %d watermelons type pumpkin with diameter %.2f sm and peelthickness %.2f sm instead of %d watermelons type melon with diameter %.2f sm and peelthickness %.2f sm\n", 
        numWatermelonB, averageDiameterB, averagePeelThicknessB, numWatermelonA, averageDiameterA, averagePeelThicknessA);
    }

    free(pMelon);
    free(pPumpkin);
    return 0;
}
