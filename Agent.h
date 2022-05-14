#pragma once
#include "Person.h"
#include <string>
using namespace std;

class Agent : public Person
{
private :
	string agentID;
	float commission;

public :
	Agent();
	void addAgent();
	void removeAgent();
	void login();
	void updateAgentDetails();
	void displayAgentDetails();
	~Agent();
};

