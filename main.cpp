#include <iostream>
#include "Customer.h"
#include "Person.h"
#include <string>
using namespace std;

int main() {
	Customer* c = new Customer();
	c->displayCustomerDetails();
	delete c;

	return 0;
}