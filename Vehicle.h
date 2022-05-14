#pragma once
#include <string>
using namespace std;

class Vehicle
{
private :
	string vehicleID;
	string regNo;
	string type;
	string brand;
	int capacity;
	float chargePerKm;

public :
	Vehicle();
	void addVehicle();
	void removeVehicle();
	void updateVehicleDetails();
	void displayVehicleDetails();
	void updateVehicleSatus();
	~Vehicle();
};
