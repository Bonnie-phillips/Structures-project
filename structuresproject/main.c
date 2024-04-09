#include <stdio.h>
#include "functions.h"

int main() 
{
    int arraySize = 10;
    struct Car carsArray[arraySize];
  displayCar(carsArray, arraySize);
    printCar(carsArray, arraySize);
    return 0;
}
