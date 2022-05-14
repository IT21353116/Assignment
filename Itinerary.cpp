#include "Itinerary.h"
#include <iostream>
using namespace std;

Itinerary::Itinerary()
{
	ItineraryNO = "I0000";
	customerID = "C000";
	startDate = "DD/MM/YYYY";
	location = "";
	endDate = "DD/MM/YYYY";
	returnedDate = "DD/MM/YYYY";
}

void Itinerary::addNewItinerary()
{
}

void Itinerary::deleteItinerary()
{
}

void Itinerary::displayItineraryDetails()
{
}

void Itinerary::confirmRental()
{
}

void Itinerary::confirmReturn()
{
}

Itinerary::~Itinerary()
{
	cout << "Destructor running for Itinerary" << endl;
}
