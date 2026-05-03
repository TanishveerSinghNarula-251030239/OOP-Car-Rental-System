#include"Car.h"
#include<iostream>

Car::Car()
{
    seats = 5;
    model = "Default car";
    rentPerDay = 1000;
    fuelType = "Petrol";
    transmission = "Manual";
}
void Car::displayVehicle()
{
    std::cout << "ID: " << vehicleId << std::endl;
    std::cout << "Car model: " << model << std::endl;
    std::cout << "Seats: " << seats << std::endl;
    std::cout << "Rent per day: " << rentPerDay << std::endl;
    std::cout << "Fuel Type: " << fuelType << std::endl;
    std::cout << "Transmission: " << transmission << std::endl;
    std::cout << "Status: " << (available ? "Available" : "Booked") << std::endl;   
}
