#pragma once
#include "Agent.h"
#include "Vehicle.h"
#include <string>
using namespace std;

class Contract
{
private :
	string contractNo;
	Agent* a;
	Vehicle* v;
	string startDate;
	string endDate;

public :
	Contract();
	void addNewContract();
	void deleteContract();
	void displayContractDetails();
	~Contract();
};

