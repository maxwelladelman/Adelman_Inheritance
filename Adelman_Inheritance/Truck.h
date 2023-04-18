#ifndef TRUCK_H
#define TRUCK_H
#include "Vehicle.h"
#include <iostream>


class Truck : public Vehicle {

protected:
	double towCapacity;

public:

	Truck(std::string make, int year, double towCapacity);



	virtual void displayInfo() override;


	virtual ~Truck() {
		
	}





};



#endif //TRUCK_H