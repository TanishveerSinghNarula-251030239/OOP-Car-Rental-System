#ifndef CUSTOMER_H
#define CUSTOMER_H

#include<string>

class Customer
{
protected:
int customerId;
std::string name;
std::string phoneNumber;
std::string licenseNumber;

public:
Customer();
void displayCustomer();

};
#endif