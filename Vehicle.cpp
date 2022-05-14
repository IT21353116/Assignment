#include "Vehicle.h"
#include <iostream>
using namespace std;

Vehicle::Vehicle()
{
	vehicleID = "V000";
	regNo = "";
	type = "";
	brand = "";
	capacity = 0;
	chargePerKm = 0;
}

void Vehicle::addVehicle()
{
}

void Vehicle::removeVehicle()
{
}

void Vehicle::updateVehicleDetails()
{
}

void Vehicle::displayVehicleDetails()
{
}

void Vehicle::updateVehicleSatus()
{
}

Vehicle::~Vehicle()
{
	cout << "Destructor running for Vehicle" << endl;
}
