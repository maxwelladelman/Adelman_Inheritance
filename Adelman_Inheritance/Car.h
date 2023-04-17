#ifndef CAR.H
#define CAR.H
#include "Vehicle.h"
class Car : public Vehicle
{
protected:

	int numDoors;

public:
    Car(std::string make, int year, int numDoors);
    void displayInfo() override;

};



#endif
