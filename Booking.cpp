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

void Booking::calculateRent() 
{
    totalRent = rentPerDay * numberOfDays;
}

void Booking::displayBooking(_)
{
    customer.displayCustomer();
    vehicle.displayVehicle();

    std::cout << "Days Rented: " << numberOfDays << std::endl;
    std::cout << "Booking Date: " << bookingDate << std::endl;
    std::cout << "Return Date: " << returnDate << std::endl;
    std::cout << "Total Rent: " << totalRent << std::endl;
}