#pragma once
#include "Itinerary.h"
#include <string>
using namespace std;

class Payment
{
private :
	string billNo;
	Itinerary* i;
	float billAmount;
	string customerID;
	string paymentDate;

public :
	Payment();
	void newPayment();
	void calculateBill();
	void displayPayemntDetails();
	void validatePayment();
	void confirmPayment();
	~Payment();
};
