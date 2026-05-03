#ifndef BOOKING_H
#define BOOKING_H

#include"Vehicle.h"
#include"Customer.h"
#include<string>

 class Booking 
{
private:
Customer customer;
Vehicle* vehicle;

int numberOfDays;
double totalRent;
std::string bookingDate;
std::string returnDate;
static int nextId;
 
public:
Booking();
 
void setVehicle(Vehicle* v);
void setCustomer(Customer c);
void setDays(int d);
void setDates(std::string bDate,std::string rDate);
Vehicle* getVehicle();


void calculateRent();
void displayBooking();



};

#endif