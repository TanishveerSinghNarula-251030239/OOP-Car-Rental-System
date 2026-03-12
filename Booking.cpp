#include "Booking.h"
#include <iostream>

Booking::Booking()
{
    numberOfDays = 0;
    totalRent = 0;
    bookingDate = "N/A";
    returnDate = "N/A";
}

void Booking::calculateRent()
{
    totalRent = rentPerDay * numberOfDays;
}

void Booking::displayBooking()
{
    std::cout << "Customer Name: " << name << std::endl;
    std::cout << "License Number: " << licenseNumber << std::endl;
    std::cout << "Vehicle Model: " << model << std::endl;
    std::cout << "Days Rented: " << numberOfDays << std::endl;
    std::cout << "Booking Date: " << bookingDate << std::endl;
    std::cout << "Return Date: " << returnDate << std::endl;
    std::cout << "Total Rent: " << totalRent << std::endl;
}