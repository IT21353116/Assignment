#pragma once
#include "Person.h"
#include <string>
using namespace std;

class Driver : public Person
{
private :
	string driverID;
	string LicenseNo;

public :
	Driver();
	void addDriver();
	void removeDriver();
	void login();
	void updateDriverDetails();
	void displayDriverDetails();
	~Driver();
};

