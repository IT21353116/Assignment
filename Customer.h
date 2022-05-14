#pragma once
#include "Person.h"
#include "Reservation.h"
#include <string>
using namespace std;

#define SIZE 2

class Customer : public Person
{
private:
	string customerID;
	string LicenseNo;
	Reservation *r[SIZE];

public :
	Customer();
	void addCustomer();
	void deleteCustomer();
	void login();
	void updateCustomerDetails();
	void displayCustomerDetails();
	~Customer();
};

