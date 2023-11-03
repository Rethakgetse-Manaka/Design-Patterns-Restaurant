#ifndef VALET_H
#define VALET_H

#include "ValetService.h"
#include "Customer.h"

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
