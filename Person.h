#pragma once
#include <string>
using namespace std;

class Person
{
protected :
	string personID ;
	string Name;
	string Address;
	string DOB;
	string Email;

public : 
	Person();
	void addPerson();
	void deletePerson();
	void updatePersonDetails();
	void displayDetails();
	void searchVehicle();
	void suggestVehicle();
	~Person();
};

