#ifndef VALET_H
#define VALET_H

#include "ValetService.h"
#include "Customer.h"

/**
 * @brief The Valet class represents a valet who provides valet parking services to customers.
 * 
 * This class inherits from the ValetService class and overrides its pure virtual functions.
 * It has a constructor that takes a valet ID and a pointer to a Customer object.
 * It also has member functions to park and return a vehicle, as well as a function to get the valet ID.
 * 
 */
class Valet : public ValetService {
public:
    Valet(int valetId, Customer* customer);
    
    void parkVehicle(Customer* customer, int id) override ;
    int getValetId();
    void returnVehicle(Customer* customer, int id) override ;

private:
    Customer* customer;
    int valetId;
    //int getValetId();
};

#endif
