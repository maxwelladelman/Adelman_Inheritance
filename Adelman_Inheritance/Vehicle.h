#ifndef VEHICLE_H
#define VEHICLE_H
#include<string>

class Vehicle {

protected:
	std::string manufacturer;
	int year;//year built

public:
	Vehicle(std::string manufacturer, int year);



	virtual void displayInfo();










};








#endif // !VEHICLE_H
