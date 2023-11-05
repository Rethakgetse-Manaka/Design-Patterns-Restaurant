#include "Valet.h"
#include <iostream>

Valet::Valet(int valetId, Customer* customer) {
    this->valetId = valetId;
    this->customer = customer;
}

void Valet::parkVehicle(Customer *customer, int id)
{
    std::cout << "Dear " << customer->getCustomerName()  << " a valet is parking the vehicle." << std::endl;
    customer->setValletID(id);
}

void Valet::returnVehicle(Customer *customer, int id)
{
    std::cout << "Valet is returning the vehicle." << std::endl;
    //customer->setValletID(id);
}

int Valet::getValetId()
{
    return valetId;
}
