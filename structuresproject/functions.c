#include <stdio.h>
#include "functions.h"

void displayCar(struct Car *carsArray,int arraysize)
{
    for(int i=0;i<arraysize;i++){
        printf("enter car %d details:\n",i+1 );
        printf("make:");
        scanf("%s", &carsArray[i].make);
        printf("model:");
        scanf("%s", &carsArray[i].model);
        printf("year:");
        scanf("%d", &carsArray[i].year);
        printf("price:");
        scanf("%lf", &carsArray[i].price);
    }
}
void printCar(struct Car *carsArray,int arraysize){
    printf("\ncarsdetails:");
    for(int i=0;i<arraysize;i++){
        printf("car %d:\n",i+1 );
        printf("make:%c\n",carsArray[i].make);
        printf("model:%c\n",carsArray[i].model);
        printf("year:%d\n",carsArray[i].year);
         printf("price:%lf\n",carsArray[i].price);
    }

}