#include "Vehicle.h"
#include <iomanip>
#include <iostream>

Vehicle::Vehicle(std::string man, int year) {
	this->manufacturer = man;
	this->year = year;
}


void Vehicle::displayInfo() {
	std::cout << "Manufacturer: " << manufacturer << " Year: " << year << std::endl;
}