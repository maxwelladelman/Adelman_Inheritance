#ifndef CAR_H
#define CAR_H
#include "Vehicle.h"
#include <iostream>
class Car : public Vehicle
{
protected:

	int numDoors;

public:
    Car(std::string make, int year, int numDoors);
    
    
    virtual void displayInfo() override;



    virtual ~Car() {
        
    }
    

};



#endif
