#include "Customer.h"
#include <iostream>

Customer::Customer()
{
    customerId = 0;
    name = "Unknown";
    phoneNumber = "N/A";
    licenseNumber = "N/A";
}

void Customer::displayCustomer()
{
    std::cout << "Customer ID: " << customerId << std::endl;
    std::cout << "Name: " << name << std::endl;
    std::cout << "Phone Number: " << phoneNumber << std::endl;
    std::cout << "License Number: " << licenseNumber << std::endl;
}