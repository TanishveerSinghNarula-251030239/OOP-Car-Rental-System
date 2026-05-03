#include "Customer.h"
#include <iostream>

int Customer::nextId=0;

Customer::Customer()
{
    customerId = ++nextId;
    name = "Unknown";
    phoneNumber = "N/A";
    licenseNumber = "N/A";
}
void Customer::inputCustomer()
{
std::cin.ignore();
std::cout<<"Enter Name: ";
std::getline(std::cin,name);
std::cout<<"Enter Phone Number: ";
std::getline(std::cin,phoneNumber);
std::cout<<"Enter License Number: ";
std::getline(std::cin,licenseNumber);
}

void Customer::displayCustomer()
{
    std::cout << "Customer ID: " << customerId << std::endl;
    std::cout << "Name: " << name << std::endl;
    std::cout << "Phone Number: " << phoneNumber << std::endl;
    std::cout << "License Number: " << licenseNumber << std::endl;
}