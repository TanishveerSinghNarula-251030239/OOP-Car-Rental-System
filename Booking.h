#ifndef BOOKING_H
#define BOOKING_H

#include"Vehicle.h"
#include"Customer.h"
#include<string>

 class Booking : public Vehicle, public Customer
{
protected:
int numberOfDays;
double totalRent;
std::string bookingDate;
std::string returnDate;
 
public:
Booking();

void calculateRent;
void displayBooking;


};

#endif