#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
#include "Vehicle.h"
#include "Car.h"


using namespace std;




//Maxwell Adelman
//4/17/2023
//CIS 1202.501
//Inheritance assignment
int main() {



	Car* testCar = new Car("test", 1999,4);


	testCar->displayInfo();


	delete testCar;








 }