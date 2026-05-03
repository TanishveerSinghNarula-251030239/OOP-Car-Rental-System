#ifndef CAR_H
#define CAR_H

#include"Vehicle.h"
#include<string>

class Car : public Vehicle
{
    private:
    int seats;
    std::string fuelType;
    std::string transmission;

    public:
    Car();
    void displayVehicle() override;
};

#endif