#include "Driver.h"
#include <iostream>
#include <string>
using namespace std;

Driver::Driver()
{
	driverID = "D000";
	LicenseNo = "";
}

void Driver::addDriver()
{
}

void Driver::removeDriver()
{
}

void Driver::login()
{
}

void Driver::updateDriverDetails()
{
}

void Driver::displayDriverDetails()
{
}

Driver::~Driver()
{
	cout << "Destructor running for Driver" << endl;
}
