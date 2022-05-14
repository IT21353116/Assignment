#include "Payment.h"
#include <iostream>
#include <string>
using namespace std;

Payment::Payment()
{
	billNo = "000000";
	billAmount = 0;
	customerID = "C000";
	paymentDate = "DD/MM/YYYY";
}

void Payment::newPayment()
{
}

void Payment::calculateBill()
{
}

void Payment::displayPayemntDetails()
{
}

void Payment::validatePayment()
{
}

void Payment::confirmPayment()
{
}

Payment::~Payment()
{
	cout << "Destructor running for Payment" << endl;
}
