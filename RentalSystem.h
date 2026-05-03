#ifndef RENTALSYSTEM_H
#define RENTALSYSTEM_H

#include <vector>
#include "Vehicle.h"
#include "Car.h"
#include "Booking.h"
#include "Customer.h"

class RentalSystem
{
private:
    std::vector<Vehicle*> vehicles;
    std::vector<Booking> bookings;

public:
    RentalSystem();
    void addCar();
    void viewCars();
    void rentCar();
    void returnCar();
    void searchAvailableCar();
    void deleteCar();
    void displayAllBookings();
    void menu();
    ~RentalSystem();
};

#endif