#pragma once
#include "Customer.h"
#include "Itinerary.h"
#include <string>
using namespace std;

class Reservation
{
private :
	string reservationNo;
	Itinerary *i;
	Customer *c;
	string reservedDate;

public :
	Reservation();
	void addReservation();
	void cancelReservation();
	void displayReservationDetails();
	~Reservation();
};

