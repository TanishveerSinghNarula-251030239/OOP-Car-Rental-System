#include"Car.h"
#include<iostream>

Car::Car()
{
    seats = 5;
    model = "Defautl cars";
    rentPerDay = 1000;
}
void Car::displayVehicle()
{
    std::cout << "car model: " << model << std::endl;
    std::cout << "seats: " << seats << std::endl;
    std::cout << "Rent per day: " << rentPerDay << std::endl;
}
