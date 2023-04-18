#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
#include "Vehicle.h"
#include "Car.h"
#include "Truck.h"


using namespace std;




//Maxwell Adelman
//4/17/2023
//CIS 1202.501
//Inheritance assignment
int main() {

	string manu;
	int year;
	
	int numDoors;
	double towCap;
	

	cout << "Enter car manufacturer: ";
	getline(cin, manu);

	cout << "Enter car year: ";
	cin >> year; cin.ignore();

	Vehicle* vehicleTest = new Vehicle(manu, year);

	cout << endl;
	vehicleTest->displayInfo();
	cout << endl;

	cout << "Enter car manufacturer: ";
	getline(cin, manu);

	cout << "Enter car year: ";
	cin >> year; cin.ignore();

	cout << "Enter number of doors: ";
	cin >> numDoors; cin.ignore();


	Car* carTest = new Car(manu, year, numDoors);
	cout << endl;
	carTest->displayInfo();
	cout << endl;



	cout << "Enter car manufacturer: ";
	getline(cin, manu);

	cout << "Enter car year: ";
	cin >> year;

	cout << "Enter towing capacity: ";
	cin >> towCap;

	Truck* truckTest = new Truck(manu, year, towCap);

	cout << endl;
	truckTest->displayInfo();
	cout << endl;
	

	delete truckTest;
	delete carTest;
	delete vehicleTest;








 }