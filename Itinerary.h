#pragma once
#include <string>
#include "Vehicle.h"
#include "Payment.h"
#include "Driver.h"
using namespace std;

class Itinerary
{
private :
	string ItineraryNO;
	string customerID;
	Vehicle* V;
	Driver* D;
	string startDate;
	string location;
	string endDate;
	string returnedDate;
	Payment* P;

public :
	Itinerary();
	void addNewItinerary();
	void deleteItinerary();
	void displayItineraryDetails();
	void confirmRental();
	void confirmReturn();
	~Itinerary();

};

