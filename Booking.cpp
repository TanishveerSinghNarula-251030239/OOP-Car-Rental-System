#include"Car.h"
#include "Booking.h"
#include <iostream>

Booking::Booking()
{
    vehicle = new Car();
    numberOfDays = 0;
    totalRent = 0;
    bookingDate = "N/A";
    returnDate = "N/A";
}

void Booking::setVehicle(Vehicle* v)
{
vehicle=v;
}

void Booking::setCustomer(Customer c)
{
customer=c;
}

void Booking::setDays(int d)
{
numberOfDays=d;
}

void Booking::setDates(std::string bDate,std::string rDate)
{
bookingDate=bDate;
returnDate=rDate;
}

Vehicle* Booking::getVehicle()
{
return vehicle;
}

void Booking::calculateRent() 
{
    totalRent = vehicle->getRentPerDay() * numberOfDays;
}

void Booking::displayBooking()
{
}

void Booking::displayBooking()
{
    customer.displayCustomer();
    vehicle->displayVehicle();

    std::cout << "Days Rented: " << numberOfDays << std::endl;
    std::cout << "Booking Date: " << bookingDate << std::endl;
    std::cout << "Return Date: " << returnDate << std::endl;
    std::cout << "Total Rent: " << totalRent << std::endl;
}