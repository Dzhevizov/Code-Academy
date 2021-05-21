#include <stdio.h>
#include <stdbool.h>

int main(){
    int numSenzors = 0;
    scanf("%d",&numSenzors);
    float input_Digits[numSenzors];
    for (int i = 1; i <= numSenzors; i++){
        scanf("%f",&input_Digits[i]);
    }
    for (int i = 1; i <= numSenzors; i++){
        printf("%.2f ",input_Digits[i]);
    }
    printf("\n");
    for (int i = 1; i <= numSenzors; i++){
        if (input_Digits[i] >= 0 && input_Digits[i] <= 0.5){
            input_Digits[i] = 0;
        } else if (input_Digits[i] >= 0.5 && input_Digits[i] <= 1){
            input_Digits[i] = 1;
        }
    }
    for (int i = 1; i <= numSenzors; i++){
        printf("%.2f ",input_Digits[i]);
    }
    printf("\n");
    bool flag = false;
    int count = 0;
    int output_digits[count];
    for (int i = 1; i <= numSenzors; i++){
        if (input_Digits[i] == 0){
            if (flag == false){
                flag = true;
            } else {
                printf("%d",1);
                output_digits[count] = 1;
                count++;
                flag = false;
            }
        } else {
            if (flag == true){
                printf("%d",0);
                output_digits[count] = 0;
                count++;
                flag = false;
            }
        }
    }
    printf("\n");
    printf("%d",count);
    printf("\n");
    for (int i = 0; i < count; i++){
        printf("%d",output_digits[i]);
    }
    printf("\n");
    return 0;
}
