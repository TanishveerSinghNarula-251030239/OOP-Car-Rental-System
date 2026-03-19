#include"Car.h"
#include<iostream>

Car::Car()
{
    seats = 5;
    model = "Default Car";
    rentPerDay = 1000;
}
void Car::displayVehicle()
{
    std::cout << "Car Model: " << model << std::endl;
    std::cout << "Seats: " << seats << std::endl;
    std::cout << "Rent per Day: " << rentPerDay << std::endl;
}