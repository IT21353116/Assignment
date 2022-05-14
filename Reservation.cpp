#include "Reservation.h"
#include <iostream>
using namespace std;

Reservation::Reservation()
{
	reservationNo = "R0000";
	reservedDate = "DD/MM/YYYY";
}

void Reservation::addReservation()
{
}

void Reservation::cancelReservation()
{
}

void Reservation::displayReservationDetails()
{
}

Reservation::~Reservation()
{
	cout << "Destructor running for Reservation" << endl;
}
