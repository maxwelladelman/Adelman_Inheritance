#include "Truck.h"
#include <iostream>

Truck::Truck(std::string make, int year, double towCapacity) : Vehicle(make, year) {
	this->towCapacity = towCapacity;
}


void Truck::displayInfo() {
	Vehicle::displayInfo();
	std::cout << "Tow Capacity: " << this->towCapacity << " pounds\n";
}