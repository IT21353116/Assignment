#include "Person.h"
#include <iostream>
#include <string>
using namespace std;

Person::Person() {
	personID = "P000";
	Name = "";
	Address = "";
	DOB = "DD/MM/YYYY";
	Email = "";
}

void Person::addPerson() {

}

void Person::deletePerson() {

}

void Person::updatePersonDetails() {

}

void Person::displayDetails() {
	cout << "PersonID : " << personID << endl;
	cout << "Name : " << Name << endl;
	cout << "Address : " << Address << endl;
}
void Person::searchVehicle() {

}

void Person::suggestVehicle() {

}

Person::~Person() {
	cout << "Destructor Running for person" << endl;
}