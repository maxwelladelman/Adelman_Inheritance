#include "Car.h"
#include <iostream>

Car::Car(std::string make, int year, int numDoors) : Vehicle(make, year)
{
    this->numDoors = numDoors;
}

void Car::displayInfo()
{
    Vehicle::displayInfo();
    std::cout << "Number of doors: " << numDoors << std::endl;
}