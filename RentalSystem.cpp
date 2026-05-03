#include "RentalSystem.h"
#include <iostream>

RentalSystem::RentalSystem()
{
    
}
void RentalSystem::addCar()
{
    Vehicle* car = new Car();
    vehicles.push_back(car);
    std::cout << "Car added successfully!\n";
}
void RentalSystem::viewCars()
{
    if (vehicles.empty())
    {
        std::cout << "No cars available.\n";
        return;
    }
    for (int i = 0; i < vehicles.size(); i++)
    {
        std::cout << "\nCar " << i + 1 << ":\n";
        vehicles[i]->displayVehicle();
    }
}
void RentalSystem::searchAvailableCar()
{
    for (auto v : vehicles)
    {
        if (v->isAvailable())
        {
            v->displayVehicle();
        }
    }
}
void RentalSystem::rentCar()
{
    Vehicle* car = nullptr;
    searchAvailableCar();

    if (car == nullptr)
    {
        std::cout << "No cars available for booking.\n";
        return;
    }
    Booking booking;
    int days;
    std::cout << "Enter number of days: ";
    std::cin >> days;
    booking.calculateRent();
    car->setAvailability(false);
    bookings.push_back(booking);
    std::cout << "Car rented successfully!\n";
}
void RentalSystem::returnCar()
{
    for (auto &b : bookings)
    {
        std::cout << "Returning a car...\n";
    }
    std::cout << "Return functionality needs refinement.\n";
}
void RentalSystem::displayAllBookings()
{
    if (bookings.empty())
    {
        std::cout << "No bookings found.\n";
        return;
    }
    for (int i = 0; i < bookings.size(); i++)
    {
        std::cout << "\nBooking " << i + 1 << ":\n";
        bookings[i].displayBooking();
    }
}
void RentalSystem::menu()
{
    int choice;

    do
    {
        std::cout << "\n===== CAR RENTAL SYSTEM =====\n";
        std::cout << "1. Add Car\n";
        std::cout << "2. View Cars\n";
        std::cout << "3. Rent Car\n";
        std::cout << "4. Return Car\n";
        std::cout << "5. View Bookings\n";
        std::cout << "6. Exit\n";
        std::cout << "Enter choice: ";
        std::cin >> choice;

        switch (choice)
        {
        case 1:
            addCar();
            break;
        case 2:
            viewCars();
            break;
        case 3:
            rentCar();
            break;
        case 4:
            returnCar();
            break;
        case 5:
            displayAllBookings();
            break;
        case 6:
            std::cout << "Exiting system...\n";
            break;
        default:
            std::cout << "Invalid choice.\n";
        }

    } while (choice != 6);
}
RentalSystem::~RentalSystem()
{
    for (auto v : vehicles)
    {
        delete v;
    }
}