#include"Vehicle.h"
#include <iostream>
Vehicle::Vehicle()
{
    VehicleId= 0;
    model="unknown";
    rentPerDay= 0;
    avaiable= true;   
}
void Vehicle::displayVehicle()
{
std::cout << "Vehicle ID:" <<  vehicleId << std::endl;
std::cout<<"Model;"<<model<<std::endl;
std::cout<<"Rent Per Day;"<<rentPerDay<<std::endl;
std::cout<<"Avaialable:"<< (avaialbe ? "Yes" : "No" ) << std::endl;
}