#ifndef VEHICLE_H
#define VEHICLE_H
#include<string>
#include<iostream>
class Vehicle {

protected:
	std::string manufacturer;
	int year;//year built

public:
	Vehicle(std::string manufacturer, int year);



	virtual void displayInfo();


	virtual ~Vehicle() {
		std::cout << "Vehicle destructed\n";
	}







};








#endif // !VEHICLE_H
