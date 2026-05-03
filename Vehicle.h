#ifndef VEHICLE_H
#define VEHICLE_H

#include <string>

class Vehicle
{
protected:
    int vehicleId;
    std::string model;
    double rentPerDay;
    bool available;
    static int nextId;
public:
    Vehicle();
    virtual void displayVehicle() = 0;

    double getRentPerDay();
bool isAvailable();
void setAvailability(bool status);
int getId();
std::string getModel();
static int getNextId();
};

#endif