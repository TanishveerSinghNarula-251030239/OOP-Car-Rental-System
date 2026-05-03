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
static int nextId;

public:
Customer();
void inputCustomer();
void displayCustomer();

};
#endif