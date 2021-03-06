/*Пощенските такси на дадена куриерска фирма се определят според
тежестта на пратките (с точност до цял грам) и обема, както е показано в таблицата.
Тегло (с точност до 1 грам) Такса до 20 г 0,46 лева; 21-50 г 0,69 лева; 51-100 г
1,02 лева; 101-200 г 1,75 лева; 201-350 г 2,13 лева; 351-500 г 2,44 лева; 501-
1000 г 3,20 лева; 1001-2000 г 4,27 лева; 2001-3000 г 5,03 лева;
Обем: до 10см + 0,01лв; 10- 50 см + 0,11 лева, 50-100 см + 0,22лв, 100-150см + 0,33лв, 150-
250см +0,56лв, 250-400см+1.50лв, 400-500см+3,11лв, 500-600см+4,89лв, над 600см+ 5.79лв
Потребителя се пита за броя на пратките пратки след което теглото на всяка пратка и обема и.
Определете според пощенските такси в тази куриерска фирма как по-евтино да изпрати своите
пратки като една или да ги изпрати като отделни пратки.
Изход 1:
За пратки с тегло ... грама обем ... и ... грама ...обем е по-добре да бъдат изпратени заедно. В
този случай изпращането ще струва ... лева.
Изход 2:
За пратки с тегло ... грама обем ... и ... грама ...обем е по-добре да бъдат изпратени заедно. В
този случай изпращането ще струва ... лева.*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int weightShipment = 0;
    int volumeShipment = 0;
    int numShipment = 0;
    int totalWeight = 0;
    int totalVolume = 0;

    double *priceShipment = 0;
    priceShipment = (double*)malloc(sizeof(double));

    double *priceTotalShipment = 0;
    priceTotalShipment = (double*)malloc(sizeof(double));

    printf("How many shipments do you have?\n");
    scanf("%d", &numShipment);

    for (int i = 1; i <= numShipment; i++){

        printf("Weight of shipment (in grams): \n");
        scanf("%d", &weightShipment);

        totalWeight += weightShipment;

        if (weightShipment <= 20){
            *priceShipment += 0.46;
        }
        else if (weightShipment <= 50){
            *priceShipment += 0.69;
        }
        else if (weightShipment <= 100){
            *priceShipment += 1.02;
        }
        else if (weightShipment <= 200){
            *priceShipment += 1.75;
        }
        else if (weightShipment <= 350){
            *priceShipment += 2.13;
        }
        else if (weightShipment <= 500){
            *priceShipment += 2.44;
        }
        else if (weightShipment <= 1000){
            *priceShipment += 3.20;
        }
        else if (weightShipment <= 2000){
            *priceShipment += 4.27;
        }
        else if (weightShipment <= 3000){
            *priceShipment += 5.03;
        }

        printf("Volume of shipment (in sm): \n");
        scanf("%d", &volumeShipment);

        totalVolume += volumeShipment;

        if (volumeShipment < 10){
            *priceShipment += 0.01;
        }
        else if (volumeShipment < 50){
            *priceShipment += 0.11;
        }
        else if (volumeShipment < 100){
            *priceShipment += 0.22;
        }
        else if (volumeShipment < 150){
            *priceShipment += 0.33;
        }
        else if (volumeShipment < 250){
            *priceShipment += 0.56;
        }
        else if (volumeShipment < 400){
            *priceShipment += 1.50;
        }
        else if (volumeShipment < 500){
            *priceShipment += 3.11;
        }
        else if (volumeShipment < 600){
            *priceShipment += 4.89;
        }
        else if (volumeShipment > 600){
            *priceShipment += 5.79;
        }
    }

    if (totalWeight > 3000){
        printf("Your shipments are too big and cannot be combined.\n");
        return 0;
    }
    else {
        if (totalWeight <= 20){
            *priceTotalShipment += 0.46;
        }
        else if (totalWeight <= 50){
            *priceTotalShipment += 0.69;
        }
        else if (totalWeight <= 100){
            *priceTotalShipment += 1.02;
        }
        else if (totalWeight <= 200){
            *priceTotalShipment += 1.75;
        }
        else if (totalWeight <= 350){
            *priceTotalShipment += 2.13;
        }
        else if (totalWeight <= 500){
            *priceTotalShipment += 2.44;
        }
        else if (totalWeight <= 1000){
            *priceTotalShipment += 3.20;
        }
        else if (totalWeight <= 2000){
            *priceTotalShipment += 4.27;
        }
        else if (totalWeight <= 3000){
            *priceTotalShipment += 5.03;
        }

        if (totalVolume < 10){
            *priceTotalShipment += 0.01;
        }
        else if (totalVolume < 50){
            *priceTotalShipment += 0.11;
        }
        else if (totalVolume < 100){
            *priceTotalShipment += 0.22;
        }
        else if (totalVolume < 150){
            *priceTotalShipment += 0.33;
        }
        else if (totalVolume < 250){
            *priceTotalShipment += 0.56;
        }
        else if (totalVolume < 400){
            *priceTotalShipment += 1.50;
        }
        else if (totalVolume < 500){
            *priceTotalShipment += 3.11;
        }
        else if (totalVolume < 600){
            *priceTotalShipment += 4.89;
        }
        else if (totalVolume > 600){
            *priceTotalShipment += 5.79;
        }
    }

    if (*priceTotalShipment <= *priceShipment){
        printf("It is better to combine your shipments. In this case they will cost %f leva instead of %f leva\n", *priceTotalShipment, *priceShipment);
    }
    else {
        printf("It is better to send your shipments separately. In this case they will cost %f leva instead of %f leva\n", *priceShipment, *priceTotalShipment);
    }

    free(priceShipment);
    free(priceTotalShipment);
    return 0;
}
