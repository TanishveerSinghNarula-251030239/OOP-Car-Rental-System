#include"Vehicle.h"
#include <iostream>
Vehicle::Vehicle()
{
    vehicleId= 0;
    model="unknown";
    rentPerDay= 0;
    available= true;   
}
void Vehicle::displayVehicle()
{
std::cout << "Vehicle ID:" <<  vehicleId << std::endl;
std::cout<<"Model: "<<model<<std::endl;
std::cout<<"Rent Per Day: "<<rentPerDay<<std::endl;
std::cout<<"Available: "<< (available ? "Yes" : "No" ) << std::endl;
}