#include "Contract.h"
#include <iostream>
using namespace std;

Contract::Contract()
{
	contractNo = "000000";
	a = new Agent();
	v = new Vehicle();
	startDate = "DD/MM/YYYY";
	endDate = "DD/MM/YYYY";
}

void Contract::addNewContract()
{
}

void Contract::deleteContract()
{
}

void Contract::displayContractDetails()
{
}

Contract::~Contract()
{
	delete a;
	delete v;
	cout << "Destructor running for Contract" << endl;
}
