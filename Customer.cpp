#include "Customer.h"
#include <iostream>
#include <string>
using namespace std;

Customer::Customer() {
	customerID = "C000";
	LicenseNo = "";
}

void Customer::addCustomer() {

}

void Customer::deleteCustomer() {

}

void Customer::login() {

}

void Customer::updateCustomerDetails() {

}
void Customer::displayCustomerDetails() {
	cout << "CustomerID : " << customerID << endl;
	displayDetails();
	cout << "LicenseNo : " << LicenseNo << endl;
}

Customer::~Customer() {
	cout << "Destructor running for customer" << endl;
}