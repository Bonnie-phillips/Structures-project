#ifndef FUNCTION_H
#define FUNCTION_H

struct Car {
    char make;
    char model;
    int year;
    double price;
};
void displayCar(struct Car *carsArray, int arraySize);
void printCar(struct Car *carsArray, int arraySize);
#endif
