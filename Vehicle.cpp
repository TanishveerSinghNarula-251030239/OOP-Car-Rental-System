#include"Vehicle.h"
#include <iostream>

int Vehicle::nextId = 0;

Vehicle::Vehicle()
{
    vehicleId=++nextId;
    model="unknown";
    rentPerDay= 0;
    available= true;   
}


double Vehicle::getRentPerDay()
{
    return rentPerDay;
}

bool Vehicle::isAvailable()
{
    return available;
}

void Vehicle::setAvailability(bool status)
{
    available = status;
}

int Vehicle::getId()
{
    return vehicleId;
}

std::string Vehicle::getModel()
{
    return model;
}
