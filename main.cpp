#include <iostream>
#include"Car.h"

using namespace std;

int main()
{
    Vehicle* v1 = new Car();
    v1->displayVehicle();

    delete v1;

    return 0;
}